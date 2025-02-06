#include <iostream>

using namespace std;

int main(void)
{
	int	n; cin >> n;

	int arr[n];
	int tmp[n];
	for (int i = 0; i < n; i++)
	{
		long long nb; cin >> nb;
	
		arr[i] = nb;
	}
	int u = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		tmp[u] = arr[i];
		u++;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] != tmp[i])
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";

}
