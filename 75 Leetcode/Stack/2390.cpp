#include <iostream>
#include <stack>

using namespace std;


class Solution 
{
public:
    static string removeStars(string s) 
    {
        stack<char> stk;

        for (int i = 0; i < s.length(); i++)    
            (s[i] == '*' && !stk.empty()) ? stk.pop() : stk.push(s[i]);
        
        int n = stk.size();

        s.resize(n);
        
        for (int i = n - 1; i >= 0; i--)
        {
            s[i] = stk.top();
            stk.pop();
        }

        return s;
    }
};


int main(void)
{

    std::cout << Solution::removeStars("leet**cod*e") << std::endl;

    return 0;
}
