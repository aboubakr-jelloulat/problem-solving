#include <iostream>
#include <iomanip>

using namespace std;

float	foo(float	nb)
{
	return nb - (int)nb;
}

int main(void)
{
	float	nb; cin >> nb;

	if (foo(nb) == 0)
	{
		cout << "int " << (int)nb;
	}
	else
	{
		cout << "float " << (int)nb << " " << fixed << setprecision(3) << foo(nb);
	}

	return (0);
}