#include <iostream>
#include <string>
using namespace std;


class Solution 
{
public:
    int reverse(int x) 
    {
        long result = 0;
        int digit = 0;
        while (x)
        {
            digit = x % 10;
            x /= 10;

            result = (result * 10) + digit;

            if (result > INT_MAX || result < INT_MIN)
                return 0;
        }
        return result;
        
    }
};

int main(void)
{
    Solution    solve;

    cout << solve.reverse(1993939339) << endl;

    return 0;
}