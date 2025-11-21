#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
private :

public:
    static vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
	{
		vector<bool> result(candies.size());

		int max = *max_element(candies.begin(), candies.end());
	
        for (int i = 0; i < candies.size(); i++)
			result[i] = (candies[i] + extraCandies >= max);

		return result;
    }
};

int main()
{
	vector<int> v = {2,3,5,1,3};
	vector<bool> res = Solution::kidsWithCandies(v, 3);

	for (auto item : res)
		cout << item << " ";
	cout << endl;

	return 0;
}
