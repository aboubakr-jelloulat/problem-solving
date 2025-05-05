#include <iostream>
#include <vector>
using namespace std;

const int N = 100000;
int freq[N];
void FastIO() {ios::sync_with_stdio(0); cin.tie(0);}
typedef vector <int> vi;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> frq(100001);
        for(auto it : nums)
            frq[it+50000]++;
            
        vector<int> v;
        for(int i = 0; i < 100001; i++)
            while(frq[i]--)
                v.push_back(i-50000);
        return v;
    }
};

// int main(void)
// {
//     FastIO();
//     vector <int> nums = {5, 2, 3, 1};
//     Solution sol;
//     vector <int> v_res = sol.sortArray(nums);
//     fo