#include <iostream>
using namespace std;

int main(void)
{
	long long nb;

    cin >> nb;

	if (nb == 1)
	{
		cout << "NO";
		return 0;
	}

    for (long long i = 2; i < nb; i++)
    {
        if(nb % i == 0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
