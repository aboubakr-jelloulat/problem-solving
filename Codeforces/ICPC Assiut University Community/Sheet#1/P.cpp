#include <iostream>

using namespace std;

int main(void)
{
	int nb, tmp;

	cin >> nb;

	while (nb)
	{
		tmp = nb % 10;
		nb /= 10;
	}

	(tmp % 2== 0) ? cout << "EVEN" : cout << "ODD";

	return (0);
}
