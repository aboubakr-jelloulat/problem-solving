#include <iostream>
using namespace std;

int main(void)
{
	int sizeA, sizeB; cin >> sizeA >> sizeB;
	int arr1[sizeA], arr2[sizeB];

	for (long long i = 0; i < sizeA; i++) cin >> arr1[i];
	for (long long i = 0; i < sizeB; i++) cin >> arr2[i];

	int u = 0;
	for (int i = 0; i < sizeA; i++)
	{
		if (arr1[i] == arr2[u])
		{
			u++;
		}
	}
	(u == sizeB) ? cout << "YES" << endl : cout << "NO" << endl;

	return 0;
}