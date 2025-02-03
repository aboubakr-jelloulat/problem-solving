#include <iostream>
using namespace std;

int main(void)
{
	long long T;
	cin >> T;

	while (T--)
	{
		long long nb;
		cin >> nb;
		if (nb == 0) // N (0 ≤ N ≤ 109)
			cout << 0;
		else
		{
			while (nb)
			{
				cout << nb % 10 << " ";
				nb /= 10;
			}
		}

		cout << endl;
	}

	return 0;
}
