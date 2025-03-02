#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	string s;   getline(cin, s);
	int i = 0, start = 0, len = s.length();

	for (int i = 0; i <= len; i++)
	{
		if (i == len || s[i] == ' ')
		{
			reverse(s.begin() + start, s.begin() + i);
			start = i + 1;
		}
	}

	cout << s << endl;

	return 0;
}
