#include <iostream>
using namespace std;


int main(void)
{
	int n; cin >> n;

	int arr[n];
	int prfx[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		prfx[i] = arr[i];
	}

	for (int i = 1; i < n; i++)
		prfx[i] += prfx[i - 1];
	

	cout << "prfx array : \n" << endl;

	for (int i = 0; i < n; i++)	cout << prfx[i] << "  ";

	return 0;
}
 