#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string s1, s2;   cin >> s1 >> s2;

	int i , j;
	for (i = 0; i < s1.length(); )
	{
		for (j = 0; j < s2.length(); j++)
		{
			if (s2[j] == s1[i])
				i++;
		}
		if (j == s2.length())
			break;
	}
	cout << i + 1<< endl;

	return 0;
}
