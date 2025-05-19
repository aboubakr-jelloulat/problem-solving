

#include <algorithm>
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// <bits/stdc++.h>    ********** not available on macOS by default ***********

using namespace std;

// Type definitions

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<ll> > vvll;
typedef vector<vector<int> > vvi; 

// Loops and iteration
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

// Useful functions

void	FastIO() {ios::sync_with_stdio(0); cin.tie(0);}



int main()
{
	FastIO();

	ll n , m , q;  cin >> n >> m >> q;

	vvll varr(n + 1, vll(m + 1, 0));

	for (int i = 1; i <= n; i++)
		for (int u = 1; u <= m; u++) cin >> varr[i][u];

	// row-wise prefix sum
	for (int i = 1; i <= n; i++)
		for (int u = 1; u <= m; u++) varr[i][u] += varr[i][u - 1];

	// col-wise parital_sum
	for (int u = 1; u <= m; u++)
		for (int i = 1; i <= n; i++) varr[i][u] += varr[i-1][u];

	while (q--)
	{
		int	x1, y1, x2, y2;  cin >> x1 >> y1 >> x2 >> y2;
	
		ll A =  varr[x2][y2], B = varr[x1 - 1][y1 - 1], C = varr[x2][y1 - 1], D = varr[x1 - 1][y2];

		cout << A - D - C + B << endl;
	}	


	return 0;
}
