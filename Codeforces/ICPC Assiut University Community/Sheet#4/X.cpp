#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string s;  cin >> s;
	string min_str = s;
	for (int i = 0; i < s.length() - 1; i++)
	{
		string w1 = s.substr(0, i + 1), w2 = s.substr(i + 1, s.length() - i + 1);
		sort(w1.begin(), w1.end());
		sort(w2.begin(), w2.end());
		string full =  w1 + w2;
		min_str = min(min_str, full);
	}
	cout << min_str << endl;

	return 0;
}
