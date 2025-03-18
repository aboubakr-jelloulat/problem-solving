#include <iostream>
using namespace std;

int main(void)
{
	int w; cin >> w;
	if (w <= 2)
	{
		cout << "NO";
		return 0;
	}

	(w % 2 == 0) ? cout << "YES" : cout << "NO";

	return 0;
}
