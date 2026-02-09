#include <iostream>
#include <vector>

using namespace std;




class Solution 
{
public:
    int largestAltitude(vector<int>& gain) 
    {
        std::vector<int> prefixSum(gain.size() + 1);

        prefixSum[0] = 0;
        prefixSum[1] = gain[0];

        
        for (int i = 2; i <= gain.size(); ++i) 
            prefixSum[i] = prefixSum[i - 1] + gain[i-1];
        
        
        int max = INT_MIN;
        for (int i = 0; i < prefixSum.size(); i++)
            max = std::max(max, prefixSum[i]);
        

        for (auto &x : prefixSum)
            cout << x << " ";

        return (max);
    }
};
