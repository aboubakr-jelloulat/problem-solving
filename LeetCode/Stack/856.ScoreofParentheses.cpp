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

// STL

typedef stack <int> stki;


// Loops and iteration
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

// Useful functions

void	FastIO() {ios::sync_with_stdio(0); cin.tie(0);}


class Solution 
{
public:
    int scoreOfParentheses(string s) 
    {
		stki	stk;

		// temp value to help us
		stk.push(0);
		for (int i = 0; i < s.length(); i++)
		{
			char c = s[i];
			if (c == '(') stk.push(0); // new parent
			else
			{
				int last = stk.top();
				stk.pop();
				last = (!last) ? last = 1 : last *= 2;
				int parent = stk.top() + last;
				stk.pop();
				stk.push(parent);
			}
		}
		return stk.top();
    }
};

// int main(void)
// {
// 	FastIO();
// 	Solution sol;

// 	cout << sol.scoreOfParentheses("()((()))") << endl;

// }
