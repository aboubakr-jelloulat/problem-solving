#include <iostream>
#include <vector>

using namespace std;

// class Solution 
// {
// public:
//     int hIndex(vector<int>& citations) 
//     {
// 		int size;
	
// 		size = citations.size();

// 		sort(citations.begin(), citations.end());

// 		for (int i = 0; i < size; i++)
// 		{
// 			if (citations[i] >= size - i)
// 				return size - i;
// 		}
        
// 		return -1;
//     }
// };



class Solution 
{
public:
    int hIndex(vector<int>& citations) 
	{
        int n = citations.size();
		
        vector<int> frq(n + 1, 0);
        
        for (int v : citations) 
            frq[min(v, n)]++;
        
        
        int total = 0;
        for (int i = n; i >= 0; i--)
		{
            total += frq[i];
            if (total >= i)	return i;
        }
        
        return 0;
    }
};

int main(void)
{
	vector<int> citations = {1,3,1};

	Solution sol;

	cout << sol.hIndex(citations) << endl;


	return 0;
}
