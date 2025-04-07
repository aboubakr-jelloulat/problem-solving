#include <iostream>
#include <algorithm>
using namespace std;

void	TheNewYear()
{
	int x1, x2, x3;   cin >> x1 >> x2 >> x3;

	

	int result = max({x1, x2, x3}) - min({x1, x2, x3});

	
	cout << result << endl;
}

int main(void)
{

	TheNewYear();

	return 0;
}
