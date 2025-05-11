#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
private:
    bool is_odd(int n) 
	{
        return n % 2 != 0;
    }

public:
    bool threeConsecutiveOdds(vector<int>& arr) 
    {
        for (size_t i = 0; i + 2 < arr.size(); ++i) 
            if (is_odd(arr[i]) && is_odd(arr[i + 1]) && is_odd(arr[i + 2]))
                return true;
            
        return false;
    }
};

int main(void)
{
	vector <int> arr{1,2,34,3,4,5,7,23,12};

	Solution sol;
	
	cout << sol.threeConsecutiveOdds(arr) << endl;

	return 0;
}
