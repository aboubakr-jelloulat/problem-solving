#include <iostream>
#include <vector>
using namespace std;



class Solution 
{
    int m, n;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

public:

    void dfs(int x, int y, vector<vector<char>>& board)
    {
        if (x < 0 || x >= m || y < 0 || y >= n || board[x][y] != 'O')
            return;

        board[x][y] = 'z';

        for (int i = 0; i < 4; i++)
        {
            dfs(x + dx[i], y + dy[i], board);
        }
    }

    void solve(vector<vector<char>>& board) 
    {
        if (board.empty()) return;

        m = board.size();
        n = board[0].size();

        
        for (int i = 0; i < m; i++)
        {
            dfs(i, 0, board);
            dfs(i, n - 1, board);
        }

        for (int j = 0; j < n; j++)
        {
            dfs(0, j, board);
            dfs(m - 1, j, board);
        }


        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == 'O')
                    board[i][j] = 'X';
                else if (board[i][j] == 'z')
                    board[i][j] = 'O';
            }
        }
    }
};