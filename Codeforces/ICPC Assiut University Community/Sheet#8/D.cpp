#include <iostream>
using namespace std;

int main(void)
{
	int l, b, year = 0; cin >> l >> b;

	while (l <= b)
	{
		l *= 3;
		b *= 2;
		year++;
	}

	cout << year << endl;

	return 0;
}
