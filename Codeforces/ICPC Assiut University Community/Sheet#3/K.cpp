#include <iostream>
using namespace std;

int main(void)
{
	int size; cin >> size;

	string nb; cin >> nb;

	int arr[size];
	long long sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum +=  nb[i] - 48;
	}
	cout << sum << endl;

	return 0;
}
