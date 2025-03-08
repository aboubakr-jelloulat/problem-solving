#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

long long Equation(long long x, long long n)
{
	long long res = 0, power =  2;

	res += pow(x, 0) - 1;
	for (int power = 2; power <= n; power += 2)
		res += pow(x, power);
	return res;
}

int main(void)
{
	long long  x, n;  cin >> x  >> n;

	cout << Equation(x, n) << endl;

	return 0;
}
