#include <iostream>
using namespace std;

// int main(void)
// {
// 	int size; cin >> size;
// 	string s; cin >> s;

// 	/*
// 		"apple" would be "a", "ap", "al", "ae", "app", "apl", "ape", "ale", "appl",
// 		"appe", "aple", "apple", "p", "pp", "pl", "pe", "ppl", "ppe", "ple", "pple",
// 		"l", "le", "e"
// 	*/

// 	string sub {};
// 	sub += s[0];
// 	for (int i = 1, j = 0; i < size; i++)
// 	{
// 		if (sub[j] != s[i])
// 		{
// 			sub += s[i];
// 			j++;
// 		}
// 	}
// 	cout << sub << endl;
// 	cout << sub.length() << endl;

// 	return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int size; cin >> size;
    string s; cin >> s;

    string sub;
    sub += s[0];

    for (int i = 1; i < size; i++)
	{
        if (sub.back() != s[i])
		{
            sub += s[i];
        }
    }

    cout << sub.length() << endl;
    return 0;
}
