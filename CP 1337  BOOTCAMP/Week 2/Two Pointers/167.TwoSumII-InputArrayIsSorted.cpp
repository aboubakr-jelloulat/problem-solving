#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        for (int l = 0, r = numbers.size() - 1, sum = 0; l < r;)
        {
            sum = numbers[l] + numbers[r];
            if (sum < target)
                l++;
            else if (sum > target)
                r--;
            else
                return {l + 1, r + 1};
        }
        return {};
    }
};



int32_t	main(void)
{
	vector <int> arr {3,24,50,79,88,150,345};

	Solution sol;

	arr = sol.twoSum(arr, 200);

	cout << "[" << arr[0] << " , " << arr[1] << "]" << endl;

	return 0;
}