#include <iostream>
#include <string>
using namespace std;

int freq[52];

void Count(const string &s)
{
	for (auto c : s)
		(isupper(c)) ? freq[c - 'A'] ++ :	freq[c - 'a' + 26] ++;

	for (int i = 0; i < 52; i++)
		if (freq[i])
			(i < 26) ? cout << char (i + 'A') << " " << freq[i] << endl : cout << char (i + 'a' - 26) << " " << freq[i] << endl;
}

int main()
{
    string s;	cin >> s;

    Count(s);
    return 0;
}
