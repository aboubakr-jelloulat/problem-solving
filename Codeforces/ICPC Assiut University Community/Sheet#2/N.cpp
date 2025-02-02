#include <iostream>
using namespace std;

int main(void)
{
	short N;
	char s;

	cin >> s;
	cin >> N;

	while (N--)
	{
		short nb; cin >> nb;
	
		for (int i = 0; i < nb; i++)
		{
			cout << s;
		}
		cout << endl;
	}

	return 0;
}
