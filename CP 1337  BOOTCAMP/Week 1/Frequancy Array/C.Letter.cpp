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

void	FastIO() {ios::sync_with_stdio(0); cin.tie(0);}

int freq_s1[201];
int	freq_s2[201];

void solve(string s1, string s2)
{
	for (int i = 0; i < s1.length(); i++)
		if (s1[i] != ' ')
			freq_s1[(unsigned char)s1[i]]++;

	for (int i = 0; i < s2.length(); i++)
		if (s2[i] != ' ')
			freq_s2[(unsigned char)s2[i]]++;

	for (int i = 0; i < 200; i++)
		if (freq_s1[i] < freq_s2[i])
			return void(cout << "NO\n");

	cout << "YES\n";
}

int main(void)
{
	FastIO();

	string s1, s2;  getline(cin, s1), getline(cin, s2);

	solve(s1, s2);

	return 0;
}
