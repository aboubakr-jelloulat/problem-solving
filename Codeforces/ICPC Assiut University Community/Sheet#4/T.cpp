#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	string s, url[5];  getline(cin, s);

	// http://www.cleartrip.com/signin/service?username=test&pwd=test&profile=developer&role=ELITE&key=manager

	int start, end, u = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '=')
		{
			start = i + 1;
			while (s[i] != '&' && i < s.length())
			{
				i++;
			}
			end = i;
			url[u] = s.substr(start, end - start);
			
			u++;
		}
	}

	cout << "username: " << url[0] << endl;
	cout << "pwd: " << url[1] << endl;
	cout << "profile: " << url[2] << endl;
	cout << "role: " << url[3] << endl;
	cout << "key: " << url[4] << endl;

	return 0;
}
