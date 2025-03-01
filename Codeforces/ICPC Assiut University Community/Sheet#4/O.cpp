#include <iostream>
using namespace std;

int main(void)
{
	int size; cin >> size;
	int arr[26] = {};

	char c;
	for (int i = 0; i < size; i++)
	{
		cin >> c;
		arr[c - 'a']++;
	}

	for (int i = 0; i  < 26; i++)
		while (arr[i])
		{
			cout << char(i + 'a');
			arr[i] --;
		}

	return 0;
}
