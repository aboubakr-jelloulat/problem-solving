/**
 * CP-Templates - Comprehensive Competitive Programming Template
 * Author: [Aboubakr jelloulat]
 * GitHub: [aboubakr-jelloulat]
 * 
 * Usage: Include this file at the beginning of your solution
 * Platforms: LeetCode, Codeforces, and more ...
 */

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


typedef  vector <string> vs;

// Loops and iteration
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

// Useful functions

void	NITRO() {ios::sync_with_stdio(0); cin.tie(0);}

int freq[1000000 + 5];
int arr[1000000];

int	solve()
{
	int n; cin >> n;
	int counter = 0, res = INT_MIN;
	n *= 2;

	for (int i = 0; i < n; i++)
		cin >> arr[i],  freq[arr[i]]++;
	

	for (int i = 0; i < n; i++)
	{
		if (freq[arr[i]] > 1)
		{
			counter ++; // add to table
			freq[arr[i]]--;
		}
		else	counter--; // the second sock: matched pair → remove both from table
		res = max(res, counter); // update the max seen
	}
	return res;
}

int32_t	main(void)
{
	cout << solve() << endl;

	return 0;
}
