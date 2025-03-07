#include <iostream>
using namespace std;

void MaxAndMin(int *arr, int len)
{
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	cout << min << " " << max << endl;
}

int main(void)
{
	int len; cin >> len;
	int arr[len];

	for (int i = 0; i < len; i++) cin >> arr[i];
	MaxAndMin(arr, len);

	return 0;
}
