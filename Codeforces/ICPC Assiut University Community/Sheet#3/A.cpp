#include <iostream>

using namespace std;

long long my_abs(long long n)
{
	return (n > 0) ? n : n * -1;
	
}

int main(void)
{
	long long	N, sum = 0; cin >> N;

	while (N--)
	{
		long long nb; cin >> nb;
	
		sum += (nb);
	}
	cout << my_abs(sum);

	return 0;
}
