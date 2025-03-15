#include <iostream>
using namespace std;

void Recursion (int nb, int start)
{

	if (start > nb)
		return ;
	
	cout << start++ << endl;
	Recursion(nb, start);

}

int main(void)
{
	int N;  cin >> N;

	Recursion(N, 1);

	return 0;
}
