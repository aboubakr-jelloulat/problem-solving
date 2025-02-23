#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	string s; cin >> s;

	for (int i = 'a'; i <= 'z'; i++)
	{
		int counter = 0;
		for (int j = 0; j < s.length(); j++)
		{
			if (i == s[j])
				counter++;
		}
		if (counter)
			cout << (char)i << " : " << counter << endl;
	}

	return 0;
}

/*  time complexity is : O(n^2)   space is O(1)*/