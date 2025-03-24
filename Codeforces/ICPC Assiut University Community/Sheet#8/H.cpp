#include <iostream>
using namespace std;

// frequency array

int main(void)
{
	short size; cin >> size;
	short arr[size + 1], num;

	for (int i = 1; i <= size; i++)
	{
		cin >> num;
		arr[num] = i;
	}
	for (int i = 1; i <= size; i++) cout << arr[i] << " ";

	return 0;
}