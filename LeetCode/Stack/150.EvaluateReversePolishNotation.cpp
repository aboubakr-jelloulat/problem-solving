#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

class Solution
{
private :

    int first   = 0;
    int second  = 0;

    int ft_isdigit(const string& s)
    {
        if (s.empty()) return false;
    
        int i = 0;
        
        if (s[0] == '-' || s[0] == '+') 
        {
            i++;
            if (i == s.length()) 
                return false; // Only a sign isnt a number
        }
        
        for (; i < s.length(); i++) 
        {
            if (!isdigit(s[i])) 
            {
                return false;
            }
        }
        return true;
    }
    

    int intermediateCalculations(int first, int second, const string& op) 
    {
        if (op == "+") return first + second;
        if (op == "-") return first - second;
        if (op == "*") return first * second;
        if (op == "/") return first / second;
        return -1337;
    }


public:
    int evalRPN(vector<string> &tokens)
    {
        stack  <int> stk;
    
        for (int i = 0; i < tokens.size(); i++)
        {
            if (ft_isdigit(tokens[i]))
            {
                stk.push(stoi(tokens[i]));
            }
            else
            {
                second = stk.top();
                stk.pop();

                first = stk.top();
                stk.pop();

                stk.push(intermediateCalculations(first, second, tokens[i]));
            }
            
        }

        return (stk.top());
    }
};

int main() 
{
    Solution solve;

    vector<string> tokens = {"3", "8", "2", "/", "+", "5", "-"};

    cout << "Result: " << solve.evalRPN(tokens) << endl;

    return 0;
}
