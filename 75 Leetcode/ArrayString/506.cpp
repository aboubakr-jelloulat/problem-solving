#include <bits/stdc++.h>
using namespace std;


class Solution 
{
public:
    static bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
         if (n == 0)
            return true;
    
        int size = flowerbed.size();
        for (int i = 0; i < size; i++)
        {
            if (flowerbed[i] == 0)
            {
                bool emptyLeft = (i == 0) || (flowerbed[i - 1] == 0);
                bool emptyRight = (i == size - 1) || (flowerbed[i + 1] == 0);

                if (emptyLeft && emptyRight)
                {
                    flowerbed[i] = 1;
                    n--;
                    if (n == 0)
                        return true;
                }
            }
        }
        return n == 0;
    }
};


int main()
{
    vector<int> arr = {1,0,0,0,1};

    cout << "Result : " << Solution::canPlaceFlowers(arr, 1) << endl;


    return 0;
}
