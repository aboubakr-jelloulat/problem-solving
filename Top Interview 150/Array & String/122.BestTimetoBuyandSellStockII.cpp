#include <iostream>
#include <vector>
using namespace std;


typedef vector<int> vi;



class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
	{
		int cur = 0;
		int next = 1;
		int MaxP = 0;
	
		while (next < prices.size())
		{
			if (prices[next] >  prices[cur])
			{
				MaxP += prices[next] - prices[cur];
				cur = next;
			}
			else
				cur = next;
			next++;
		}

		return MaxP;
    }
};


int main()
{
    Solution sol;

	vi prices = {7,1,5,3,6,4};

	cout << sol.maxProfit(prices) << endl;

    return 0;
}
