#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

int main() 
{
    int n;  cin >> n;

    vi arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    vi prfx(n + 1, 0);
    partial_sum(arr.begin(), arr.end(), prfx.begin() + 1);

    int m; cin >> m;
    while (m--)
    {
        int q;  cin >> q;

        auto it = upper_bound(prfx.begin(), prfx.end(), q - 1);
        int curr_index = it - prfx.begin();

        cout << curr_index << endl;
    }
   
    return 0;
}
