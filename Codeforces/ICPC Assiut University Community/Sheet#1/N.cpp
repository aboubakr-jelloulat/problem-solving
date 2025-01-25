#include <iostream>

using namespace std;

int main(void)
{
	char	c, x; cin >> c;

	if (c >= 97 && c <= 122)
		x = c - 32;
	if (c >= 65 && c <= 90)
		x =  c + 32;

	cout << x;
	return (0);
}
