#include <iostream>
using namespace std;

void PrintFromNto1(int nb)
{
	if (nb == 0)
		return ;

	cout << nb;
	if (nb != 1)
		cout << " ";
	
	
	PrintFromNto1(nb - 1);
}

int main(void)
{
	int nb;  cin >> nb;

	PrintFromNto1(nb);

	return 0;
}
