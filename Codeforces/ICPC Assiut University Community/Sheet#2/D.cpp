#include <iostream>
using namespace std;


int main(void)
{
	long long x;

	while (1)
	{
		cin >> x;
	
		if (x == 1999)
		{
			cout << "Correct";
			break;
		}
		else
			cout << "Wrong" << endl;
	}

	return 0;
}
