#include <iostream>
using namespace std;

int main(void)
{
	short N; cin >> N;

	for (short i = N; i >= 0; i--)
	{
		for (short j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
