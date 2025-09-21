#include <iostream>
#include <vector>
using namespace std;


typedef vector<int> vi;



// class Solution 
// {
// public:
//     int maxProfit(vector<int>& prices) 
//     {
// 		int	res = 0;
	
// 		for (int i = 0; i < prices.size(); i++)
// 		{
// 			int buy = prices[i];
// 			for (int j = i + 1; j < prices.size(); j++)
// 			{
// 				int shell = prices[j];
// 				res = std::max(res, shell - buy);
// 			}

// 		}
// 		return res;
//     }
// };

// Time Limit Exceeded


class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
		int cur = 0, next = 1, maxP = 0;

		while (next < prices.size())
		{
			if (prices[cur] < prices[next])
			{
				int profit = prices[next] - prices[cur];

				maxP = std::max(maxP, profit);
			}
			else
				cur = next;

			next++;
		}
		return maxP;
    }

};



int main()
{
    Solution sol;

	vi prices = {7,1,5,3,6,4};

	cout << sol.maxProfit(prices) << endl;

    return 0;
}
