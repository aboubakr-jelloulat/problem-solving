#include <iostream>
using namespace std;


int main(void)
{
	int n1, n2;  cin >> n1 >> n2;

	string s;  cin >> s;

	if ((n1 + 1 + n2) != s.size() || s[n1] != '-')
	{
		cout << "No" << endl;
		return 0;
	}
	
	int i = 0;
	for (i = 0; i < n1; i++)
	{
		if (!isdigit(s[i]))
		{
			cout << "No" << endl;
			return 0;
		}
	}
	for (i = i + 1; i < n2 + n1 + 1; i++)
	{
		if (!isdigit(s[i]))
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	

	return 0;
}
