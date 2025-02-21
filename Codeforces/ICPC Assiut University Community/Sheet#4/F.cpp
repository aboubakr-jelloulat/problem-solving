#include <iostream>
using namespace std;

int main(void)
{
	int cases; cin >> cases;

	while (cases--)
	{
		string s;  cin >> s;

		int size = s.size();
		(size <= 10) ? cout << s  : cout << s[0] << size - 2 << s[size -1];
		cout << endl;
	}

	return 0;
}
