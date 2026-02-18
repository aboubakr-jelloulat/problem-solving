#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    static int equalPairs(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                bool good = true;

                for (int k = 0; k < n; k++)
                {
                    if (grid[i][k] != grid[k][j])
                    {
                        good = false; break; // ila kano machi match khass ihbass idoz l column lakhor
                    }
                }
                if (good)
                    count++;
            }
        }
        
        return count;
    }
};


int main(void)
{
    vector<vector<int>> grid = {{3,1,2,2},{1,4,4,5},{2,4,2,2},{2,4,2,2}};

    std::cout << Solution::equalPairs(grid) << std::endl;

    return 0;
}
