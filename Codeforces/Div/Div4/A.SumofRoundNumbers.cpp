#include <bits/stdc++.h>
using namespace std;


typedef vector<int> vi;

void foo(int n)
{


    if (n < 10)
    {
        cout << 1 << endl;
        cout << n << endl;
        return ;
    }
    
    vi nums;

    for (int i = 0; n > 0; i++)
    {
        int digit = n % 10;

        int result = digit *  pow(10, i);
        
        if (result)
            nums.push_back(result);

        n /= 10;
    }
    
    cout << nums.size() << endl;
    
    for (auto item : nums)
        cout << item << " ";
    
    cout << endl;

}


int main()
{
    int t; cin >> t;

    while (t--)
    {
        int n; cin >> n;
        
        foo(n);
    }


    return 0;
}
