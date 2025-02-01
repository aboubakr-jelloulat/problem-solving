#include <iostream>
using namespace std;

static long long	ReverseNumber(long long nb)
{
	int reminder = 0;
	long long	res = 0;

	while (nb)
	{
		reminder = nb % 10;
		nb /= 10;
		res = res * 10 + reminder;
	}
	return res;
}

int main(void)
{
	long long	N; cin >> N;

	cout << ReverseNumber(N) << endl;
	(N == ReverseNumber(N)) ? cout << "YES" : cout << "NO";

	return 0;
}
