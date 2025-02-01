#include <iostream>
using namespace std;
#define el endl
#define cc cout

int main(void)
{
	int		N; cin >> N;

	for (int i = 1; i <= 12; i++)
	{
		cc << N << " * " << i << " = " << N * i << el;
	}
	return 0;
}
