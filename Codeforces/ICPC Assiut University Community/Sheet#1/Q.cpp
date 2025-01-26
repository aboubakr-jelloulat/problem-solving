#include <iostream>

using namespace std;

int main(void)
{
	float x, y; cin >> x >> y;

	if (!x && !y)
		cout << "Origem";
	else if (!y && x)
		cout << "Eixo X";
	else if (y && !x)
		cout << "Eixo Y";
	else if (y > 0 && x > 0)
		cout << "Q1";
	else if (y > 0 && x < 0)
		cout << "Q2";
	else if (y < 0 && x < 0)
		cout << "Q3";
	else if (y < 0 && x > 0)
		cout << "Q4";

	return (0);
}
