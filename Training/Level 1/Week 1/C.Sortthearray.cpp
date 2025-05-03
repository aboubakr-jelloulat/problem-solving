#include <iostream>
using namespace std;

const int N = 100000 + 5;

int freq[N];

void	FastIO() {ios::sync_with_stdio(0); cin.tie(0);}

int main(void)
{
	FastIO();

	int size; cin >> size;
	for (int i = 0; i < size; i++)
	{
		int n; cin >> n;
		freq[n] ++;
	}

	for (int i = 1; i < N; i++)
		while (freq[i]--) cout << i << " ";
	cout << endl;

	return 0;
}
