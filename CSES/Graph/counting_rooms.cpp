#include <iostream>
using namespace std;
 
#define ll long long
 
const int N=1e3 + 2;
int n, m, ans; char s[N][N];
 
bool IsValid(int x, int y)
{
	return (x < n && x >= 0 && y < m && y >= 0 && s[x][y] != '#');
}

void dfs(int x, int y)
{
	s[x][y] = '#'; // make it visited
 
	if (IsValid(x+1, y))
		dfs(x+1, y);
	if (IsValid(x - 1, y))
		dfs(x - 1, y);
	if (IsValid(x, y + 1))
		dfs(x, y + 1);
	if (IsValid(x, y - 1))
		dfs(x, y - 1);
}
 
int main(void)
{
	cin >> n >> m;
 
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> s[i][j];
 
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) if (IsValid(i, j)) ans++, dfs(i, j);
 
	cout << ans;
 
	return 0;
}
