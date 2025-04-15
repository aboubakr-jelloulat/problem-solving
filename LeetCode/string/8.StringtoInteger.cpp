#include <iostream>
#include <string>
using namespace std;

class Solution
{
private:
    int _isspace(int c)
    {
        return  (c == 32 || (c >= 9 && c <= 13));
    }

public:
    int myAtoi(string s)
    {
        long result = 0;
        int sign = 1;
        int i = 0;

        while (_isspace(s[i]))
            i++;

        if (s[i] == '-' || s[i] == '+')
        {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        if (s[i] == '0')
            i++;

        while (s[i] >= '0' && s[i] <= '9')
        {
            int digit = s[i] - '0';
            if (result > (INT_MAX - digit) / 10)
                return sign == 1 ? INT_MAX : INT_MIN;

            result = result * 10 + digit;
            i++;
        }

        return static_cast<int>(result * sign);
    }
};

int main(void)
{
    Solution sol;


    cout << sol.myAtoi("-91283472332") << endl;
    cout << sol.myAtoi("21474836460") << endl;

    return 0;
}
