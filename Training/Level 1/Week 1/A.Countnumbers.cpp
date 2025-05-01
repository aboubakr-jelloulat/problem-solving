#include <iostream>
using namespace std;

int freq[100000];

int main(void)
{
	int	n, q; cin >> n >> q;

	while (q--)
	{
		int z, x;  cin >> z >> x;
		if (z == 1)	freq[x] ++;
		else cout << freq[x] << endl;
	}

	return 0;
}
