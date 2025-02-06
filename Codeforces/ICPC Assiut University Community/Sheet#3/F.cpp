#include <iostream>

using namespace std;

int main(void)
{
	int	n; cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		long long nb; cin >> nb;
	
		arr[i] = nb;
	}

	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
