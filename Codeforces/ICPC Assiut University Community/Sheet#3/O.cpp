#include <iostream>
using namespace std;

int main(void)
{
	int idx, fib; cin >> idx;

	long long arr[50] = {0, 1, 1};
	for (int i = 3; i < 50; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	cout << arr[idx - 1];


	return 0;
}
