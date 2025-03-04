#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	string  s;  cin >> s;
	int e = 0, g = 0, y = 0, p = 0, t = 0;

	for (int i = 0; i < s.length(); ++i)
	{
		if (tolower(s[i]) == 'e')  e++;
		else if (tolower(s[i]) == 'g') g++;
		else if (tolower(s[i]) == 'y') y++;
		else if (tolower(s[i]) == 'p') p++;
		else if (tolower(s[i]) == 't') t++;
	}

	cout << min({e, g, y, p, t}) << endl;

	return 0;
}
