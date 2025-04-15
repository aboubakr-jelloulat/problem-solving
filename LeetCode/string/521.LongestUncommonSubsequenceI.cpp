#include <iostream>
#include <algorithm>
using namespace std;


class Solution 
{
public:
    int findLUSlength(string a, string b) 
    {
        if (a == b)
            return -1;
        else
            return (a.length() > b.length()) ? a.length() : b.length();
        
    }
};

int main(void)
{
    Solution    sol;
    string a, b;   cin >> a >> b;

    cout << sol.findLUSlength(a, b) << endl ;

    return 0;
}
