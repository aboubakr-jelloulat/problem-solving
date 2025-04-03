#include <iostream>
using namespace std;

void	IsLuckyDivision(int nb)
{
	int lucky[12]={4, 7, 44, 47, 47, 444, 447, 474, 477, 777, 774, 744};

	for (int i = 0; i < 12; i++)
	{
		if (nb % lucky[i] == 0)
			return void (cout << "YES");
	}
	return void (cout << "NO");

}

int main(void)
{
	int nb;  cin >> nb;

	IsLuckyDivision(nb);

	return 0;
}
