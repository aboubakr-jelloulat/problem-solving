#include <iostream>

using namespace std;

int main(void)
{
	long	N, Year = 0, Month = 0, Days = 0; cin >> N;

	while (N >= 365)
	{
		Year++;
		N -= 365;
	}

	while (N >= 30)
	{
		Month++;
		N-= 30;
	}

	Days = N;

	cout << Year << " years" << endl;
	cout << Month << " months" << endl;
	cout << Days << " days" << endl;

	return (0);
}
