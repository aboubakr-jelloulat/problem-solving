#include <iostream>
using namespace std;

void Recursion(int nb)
{
	if (nb < 1)
		return ;
	cout << "I love Recursion" << endl;
	Recursion(nb - 1);
}

int main(void)
{
	int nb;  cin >> nb;

	Recursion(nb);

	return 0;
}