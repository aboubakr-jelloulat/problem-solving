#include <iostream>
using namespace std;

int main(void)
{
	int t;  cin >> t;

	while (t--)
	{
		string s1, s2, full; cin >> s1; cin >> s2;
	
		int i = 0, u = 0;
		while (i < s1.length() || i < s2.length())
		{
			if (i < s1.length())
				full += s1[i];
			if ( i < s2.length())
				full += s2[i];
			i++;
		}
		cout << full << endl;
	}

	return 0;
}
