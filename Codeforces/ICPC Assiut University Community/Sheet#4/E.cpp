#include <iostream>
using namespace std;

int main(void)
{
	string s; cin >> s;
	int sum = 0, i = 0;

	while (s[i])
	{
		sum += s[i] - '0';
		i++;
	}
	cout << sum << endl;
	
	return 0;
}
