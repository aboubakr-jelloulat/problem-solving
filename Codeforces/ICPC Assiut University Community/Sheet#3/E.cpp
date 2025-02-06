#include <iostream>

using namespace std;

int main(void)
{
	int n, min_value = 0, min_pos = 0; cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		int nb; cin >> nb;
		arr[i] = nb;
	}

	min_value = arr[0];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] <  min_value)
			{
				min_value = arr[j];
				min_pos = j;
			}
		}

	}

	cout << min_value << " " << min_pos + 1;

	return 0;
}
