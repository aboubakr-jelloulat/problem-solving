#include <iostream>
#include <algorithm>
using namespace std;

void Times(void)
{
	int nb; cin >> nb;
	char c;  cin >> c;

	while (nb --)
		cout << c << " ";
	cout << endl;
}

int main(void)
{
	int t; cin >> t;

	while (t--)
		Times();

	return 0;
}
