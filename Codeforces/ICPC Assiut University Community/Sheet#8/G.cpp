#include <iostream>
using namespace std;


int main(void)
{
	int size, groups = 1;  cin >> size;
	string before = "";

	for (int i = 0; i < size; i++)
	{
		string s;  cin >> s;
		if (i == 0)
		{
			before = s;
			continue;
		}
		if (before[1] == s[0])
		{
			groups++;
		}
		before = s;
	}
	
	cout << groups << endl;

	return 0;
}
