#include <iostream>
#include <algorithm>
using namespace std;

void shift_Right(int *arr, int size, int x)
{
	while (x--)
	{
		int last_element = arr[size - 1];
		for (int i = size - 2; i >= 0; --i)
		{
			arr[i + 1] = arr[i]; 
		}
		arr[0] = last_element;
	}
}

int main(void)
{
	int size, t; cin >> size >> t;

	int arr[size];
	for (int i = 0; i < size; i++) cin >> arr[i];

	shift_Right(arr, size, t);

	for (int i = 0; i < size; i++) cout << arr[i] << " ";

	return 0;
}
