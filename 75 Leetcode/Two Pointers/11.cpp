#include <iostream>
#include <vector>
using namespace std;


class Solution 
{
public:
    static int maxArea(vector<int>& height) 
	{
		int l = 0;
		int r = height.size() - 1;
		int res = 0;

		while (l < r)
		{
			int h = std::min(height[r], height[l]);
			int w = r - l;

			res = max((w * h), res);

			(height[l] < height[r]) ? l++ : r--;
		}
		return (res);
    }
};



int main(void)
{
	vector<int> nums = {1,8,6,2,5,4,8,3,7};

	std::cout << Solution::maxArea(nums) << std::endl;

	return 0;
}

