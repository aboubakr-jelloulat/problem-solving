#include <iostream>
#include <cctype>
using namespace std;

class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        int l = 0, r = s.length() - 1;

        while (l < r)
        {
            if (!isalnum(s[l]))
                l++;
            else if (!isalnum(s[r]))
                r--;
            else
            {
                if (tolower(s[l]) != tolower(s[r]))
                    return false;
                l++;
                r--;
            }
        }
        return true;
    }
};

int32_t main(void)
{
    Solution sol;

    cout << sol.isPalindrome("A man, a plan, a canal: Panama") << endl;  // Output: 1 (true)

    return 0;
}
