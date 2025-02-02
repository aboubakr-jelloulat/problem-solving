#include <iostream>
using namespace std;

int main(void)
{
	short N; cin >> N;

	for (short i = 1; i <= N; i++)
	{
		for (short j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
