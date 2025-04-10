//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


class Solution 
{

private :
    bool    isOpenBracket(int c)
    {
        return (c == '(' || c == '{' || c == '[');
    }

    bool    isClosedBracket(int c)
    {
        return (c == ')' || c == '}' || c == ']');
    }

    bool    isPair(int open, int close)
    {
        if (open == '(' && close == ')') return true;
        if (open == '[' && close == ']') return true;
        if (open == '{' && close == '}') return true;
    
        return false;
    }


public:
    bool isValid(string s) 
    {
        stack <char>   stackChar;

        for (int i = 0; i < s.length(); i++)
        {
            if (isOpenBracket(s[i]))
                stackChar.push(s[i]);
            
            if (isClosedBracket(s[i]))
            {
                if (!stackChar.empty() && isPair(stackChar.top(), s[i]))
                    stackChar.pop();
                
                else    return false;
                
            }


        }
        return (stackChar.empty());
    }
};

int main(void)
{
    Solution    stack;

    if (stack.isValid("]"))
        cout << "True " << endl;
    else
        cout << "False" << endl;




    return 0;
}