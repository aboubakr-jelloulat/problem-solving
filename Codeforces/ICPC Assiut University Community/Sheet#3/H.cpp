#include <iostream>

using namespace std;

int main(void)
{
	int	n; cin >> n;

	int arr[n];
	int sort[n];
	for (int i = 0; i < n; i++)
	{
		long long nb; cin >> nb;
	
		arr[i] = nb;
	}

	int tmp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] =tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
