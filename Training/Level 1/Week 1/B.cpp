
// ********  problem  ********

/*
	Sharshabeel Problems (2)

	Problem Statement:

	You have an array a of size n, and you need to answer q queries.

	Each query requires you to add val to all elements from index L to R (inclusive).



Example
Input:

5 3  
1 0 1 0 1  
1 2 1  
3 5 3  
1 5 2  


Output:


4 3 6 5 6  


*/

#include <iostream>
#include <vector>
using namespace std;

int const N = 100000+5;
long long frq[N];
# define v vector<int> 

int main()
{
	int n, query;   cin >> n >> query;

	v vec(n + 1);
	for (int i = 1; i <=n; i++)	cin >> vec[i];

	while (query --)
	{
		int l, r, val; cin >> l >> r >> val;
		if (l > r) swap(l, r);
		frq[l] += val;
		frq[r + 1] -= val;
	}

	for (int i = 1; i <= n; i++)	frq[i] += frq[i - 1];

	for (int i = 1; i <= n; i++)
		cout << vec[i] + frq[i] << " ";

	return 0;
}
