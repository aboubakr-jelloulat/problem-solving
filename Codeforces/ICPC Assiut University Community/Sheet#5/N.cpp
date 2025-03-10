#include <iostream>
#include <algorithm>
using namespace std;

void Shift_Zeros()
{
	int size, t; cin >> size;

	int arr[size], new_arr[size];;
	int zero = 0, u = 0;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		if (arr[i] == 0)
		{
			zero++;
		}
		else
		{
			new_arr[u] = arr[i];
			u++;
		}
	}
	for (; u < size; u++)
	{
		new_arr[u] = 0;
	}

	for (int i = 0; i < size; i++) cout << new_arr[i] << " ";

}


int main(void)
{
	Shift_Zeros();

	return 0;
}
