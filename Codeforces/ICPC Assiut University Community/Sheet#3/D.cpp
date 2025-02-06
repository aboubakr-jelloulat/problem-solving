#include <iostream>

using namespace std;

int main(void)
{
	int n; cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		int nb; cin >> nb;
		arr[i] = nb;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= 10)
			cout << "A[" << i << "] = " << arr[i] << endl;
	}

	return 0;
}
