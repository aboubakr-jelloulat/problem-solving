#include <iostream>
#include <vector>
using namespace std;


class Solution 
{
public:
    static bool isSubsequence(string s, string t) 
	{
		int i = 0;
		int j = 0;

		while (i < s.length() && j < t.length())
		{
			if (s[i] == t[j])
				i++;
			j++;
		}
		
		return (i ==  s.length());
    }
};


 
int main(void)
{

	cout << Solution::isSubsequence("bb", "ahbgdc") << endl;

	return 0;
}
 
