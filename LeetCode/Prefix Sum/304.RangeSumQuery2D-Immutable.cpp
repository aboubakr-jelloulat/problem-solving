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

// Loops and iteration
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

// Useful functions

void	FastIO() {ios::sync_with_stdio(0); cin.tie(0);}



class NumMatrix
{
private:
    vvi prefix;
    
public:
    NumMatrix(vector<vector<int>>& matrix) 
	{
        int n = matrix.size();
        int m = n > 0 ? matrix[0].size() : 0;
        
        prefix = vvi(n + 1, vi(m + 1, 0));
        
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= m; j++) prefix[i][j] = matrix[i-1][j-1];
            
        
        // Row-wise prefix sum
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= m; j++) prefix[i][j] += prefix[i][j-1];
            
        
        
        // Column-wise prefix sum
        for (int j = 1; j <= m; j++) 
            for (int i = 1; i <= n; i++) prefix[i][j] += prefix[i-1][j];
            
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) 
	{
        row1++; col1++; row2++; col2++;  //  indices because we added  row and column (initialize them with 0)
        
        int A = prefix[row2][col2];
        int B = prefix[row1-1][col1-1];
        int C = prefix[row2][col1-1];
        int D = prefix[row1-1][col2];
        
        return A - C - D + B;
    }
};
