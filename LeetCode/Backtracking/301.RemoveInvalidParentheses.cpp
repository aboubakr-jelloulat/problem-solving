#include <iostream>
#include <vector>
#include <string>
#include <unordered_set> // for handel duplicates bracket
using namespace std;

class Solution
{
private:
    int InvalidParentheses(string s)
    {
        int open = 0, close = 0;
        for (char c : s)
        {
            if (c == '(')
                open++;
            else if (c == ')')
                (open) ? open-- : close++;
        }
        return open + close;
    }

    bool IsBalanced(string s)
    {
        int balanced = 0;
        for (char c : s)
        {
            if (c == '(')
                balanced++;
            else if (c == ')')
            {
                if (balanced == 0)
                    return false;
                balanced--;
            }
        }
        return balanced == 0;
    }

    void backtracking(string& s, unordered_set<string>& result, int level, int removed, int to_remove, string curr_str)
    {
        if (removed > to_remove) return;
        
        if (level == s.length())
        {
            if (removed == to_remove && IsBalanced(curr_str))
            {
                result.insert(curr_str);  // Avoid duplicates using a set
            }
            return ;
        }

        if (s[level] == '(' || s[level] == ')')
        {
            backtracking(s, result, level + 1, removed + 1, to_remove, curr_str); // remove (skiip it)

            curr_str += s[level];
            backtracking(s, result, level + 1, removed, to_remove, curr_str); // keep it 
        }
        else
        {
            curr_str += s[level];
            backtracking(s, result, level + 1, removed, to_remove, curr_str); // add non Parentheses a
        }
    }

public:
    vector<string> removeInvalidParentheses(string s)
    {
        int to_remove = InvalidParentheses(s);

        unordered_set<string> result;

        backtracking(s, result, 0, 0, to_remove, "");

        return vector<string>(result.begin(), result.end()); // convert to vector
    }
};

int main()
{
    Solution sol;
    vector<string> result = sol.removeInvalidParentheses("(((((((((((((((aaaa)))))");

    for (const string& str : result)
        cout << str << endl;

    return 0;
}
