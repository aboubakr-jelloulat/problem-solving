#include <iostream>

using namespace std;

int main(void)
{
	int nb1, nb2, res;
	char op, equal;

	cin >> nb1 >> op >> nb2 >> equal >> res;

	if (op == '+')
	{
		if (nb1 + nb2 == res)
			cout << "Yes";
		else
			cout << nb1 + nb2;
	}

	if (op == '-')
	{
		if (nb1 - nb2 == res)
			cout << "Yes";
		else
			cout << nb1 - nb2;
	}

	if (op == '*')
	{
		if (nb1 * nb2 == res)
			cout << "Yes";
		else
			cout << nb1 * nb2;
	}

	return (0);
}
