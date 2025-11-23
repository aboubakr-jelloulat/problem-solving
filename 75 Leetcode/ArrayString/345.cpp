#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
	static bool	_is_vowels(char c)
	{
		return (c == 'A' || c == 'I' || c == 'E' || c == 'U' || c == 'O');
	}
public:
    static string reverseVowels(string s) 
	{
		int l = 0, r = s.length() - 1;

		while (l < r)
		{
			if (_is_vowels(toupper(s[r])))
			{
				if (_is_vowels(toupper(s[l])))
				{
					swap(s[l], s[r]);
					l++;
					r--;
				}
				else	l++;
			}
			else	r--;

			if (r <= l)
				break;

			if (_is_vowels(toupper(s[l])))
			{
				if (_is_vowels(toupper(s[r])))
				{
					swap(s[l], s[r]);
					l++;
					r--;
				}
				else	r--;
			}
			else	l++;
		}
		return s;
	}

};

int main()
{
	cout << "Reverse String  :  " << Solution::reverseVowels("IceCreAm") << endl;

	return 0;
}