#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	string s; cin >> s;

	for (int i = 0; i < s.length(); ++i)
	{
		
		if (s.substr(i, 5) == "EGYPT")
		{
			cout << " ";
			i += 4;
		}
		else
			cout << s[i];
	}

	return 0;
}
