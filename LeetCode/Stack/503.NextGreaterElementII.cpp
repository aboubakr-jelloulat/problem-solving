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
typedef	stack <int> stki;

// Loops and iteration
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

// Useful functions

void	FastIO() {ios::sync_with_stdio(0); cin.tie(0);}

class Solution 
{
public:
    vector<int> nextGreaterElements(vector<int>& nums)
    {
        stack<int> stk;
		int max = nums[0];

        for (int i = 0; i < nums.size(); ++i)
        {
            while (!stk.empty() && nums[i] > nums[stk.top()])
            {
				if (max < nums[i])
					max = nums[i];
                int idx = stk.top();
                stk.pop();
                nums[idx] = nums[i];
            }
            stk.push(i);
        }

        while (!stk.empty())
        {
            int idx = stk.top();
            stk.pop();
            nums[idx] = max;
        }

        return nums;
    }
};




// int32_t	main()
// {
// 	FastIO();
	
// 	vi nums {1, 2, 1};
// 	Solution	sol;

// 	vi res = sol.nextGreaterElements(nums);

// 	for (auto &i : nums)
// 		cout << i <<  " ";

// 	return 0;
// }
