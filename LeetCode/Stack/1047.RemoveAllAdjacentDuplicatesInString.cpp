#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Solution
{
public:
	string removeDuplicates(string s)
	{
		stack<char> stk;
		string result;

		for (int i = s.length() - 1; i >= 0; i--)
		{
			if (!stk.empty() && stk.top() == s[i])
				stk.pop();

			else
				stk.push(s[i]);
		}

		while (!stk.empty())
		{
			result += stk.top();
			stk.pop();
		}
		return result;
	}
};