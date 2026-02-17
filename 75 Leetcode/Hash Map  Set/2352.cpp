#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    static int equalPairs(vector<vector<int> >& grid) 
    {
        cout << "gird size : " << grid.size() << std::endl;

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++) 
            {
                cout << grid[i][j] << " ";
            }
            cout << endl;
            
        }
        return 0;
    }
};


int main(void)
{
    vector<vector<int> > grid = {{3, 2, 1}, {1, 7, 6}, {2, 7, 7}};

    Solution::equalPairs(grid);

    return 0;
}
