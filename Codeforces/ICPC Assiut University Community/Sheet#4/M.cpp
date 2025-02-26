#include <iostream>
using namespace std;

int main(void)
{
	string s; cin >> s;
	string str = "hello";
	int j = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == str[j])
		{
			j++;
		}
	}
	(j == 5) ? cout << "YES" << endl : cout << "NO" << endl;

	return 0;
}
