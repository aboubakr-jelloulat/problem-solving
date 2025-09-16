#include <iostream>
#include <vector>
using namespace std;


/*
	Time & Space Complexity

		Time complexity:   O(n)
		Space complexity:  O(1)

*/

class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
	{
		int	l = 1;
	
		for (int i = 1; i < nums.size(); i++)
			if (nums[i] != nums[i - 1])
				nums[l++] = nums[i];
		
		return l;
    }
};

int main()
{
	Solution sol;

	vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

	int k = sol.removeDuplicates(nums);
   
   cout << "Lenght : " << k << endl;


	cout << "Array elements : " << endl << endl;

	for (int i = 0; i < k; i++)
		cout << nums[i]  << " ";
	
	cout << endl;

	return 0;
}
