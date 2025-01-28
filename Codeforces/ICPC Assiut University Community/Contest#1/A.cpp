#include <iostream>
#include<iomanip>
using namespace std;

int main(void)
{
	float	discount, price, origin;

	cin >> discount >> price;

	origin = price / (1 - discount / 100);

	cout << fixed << setprecision(2) << origin;

	return (0);
}
