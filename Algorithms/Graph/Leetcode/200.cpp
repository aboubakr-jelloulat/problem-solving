#include <iostream>
#include <vector>
using namespace std;


class Solution 
{
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    int m, n;
    int ans = 0;

public: // O(M∗N)

    bool IsValid(int x, int y, vector<vector<char>>& grid)
    {
        return (x >= 0 && x < m && y >= 0 && y < n && grid[x][y] == '1');
    }

    void dfs(int x, int y, vector<vector<char>>& grid)
    {
        if (!IsValid(x, y, grid))
            return ;

        grid[x][y] = '0'; // mark visited

        for (int i = 0; i < 4; i++)
        {
            
            int nx = x + dx[i];
            int ny = y + dy[i];

            dfs(nx, ny, grid);
        }
    }

    int numIslands(vector<vector<char>>& grid) 
    {
        m = grid.size();
        n = grid[0].size();

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '1')
                {
                    ans++;
                    dfs(i, j, grid);
                }
            }
        }

        return ans;
    }
};