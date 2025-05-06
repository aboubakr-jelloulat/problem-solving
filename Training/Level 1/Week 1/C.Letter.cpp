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

unsigned int freq_s1[256];
unsigned int freq_s2[256];

void	Letter(string s1, string s2, bool &is_found)
{

	for (auto &i : s1)	freq_s1[i]++;
	
	for (auto &i : s2) 
		if (i != ' ') // Skip spaces as per problem statement
			freq_s2[i]++;
	
	for (int i = 0; i < 256; i++)
		if (freq_s1[i] < freq_s2[i])
			return void(is_found = false);

	is_found = true;
}

int32_t	main(void)
{
	NITRO();
	
	string s1, s2;
	bool is_found = false;

	getline(cin, s1);
	getline(cin, s2);

	Letter(s1, s2, is_found);

	cout << (is_found  ? "YES" : "NO");

	return 0;
}
