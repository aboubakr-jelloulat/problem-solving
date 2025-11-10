#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

using ll = long long;
using vl = vector<ll>;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;	cin >> n;
    vl arr(n);
    for (int i = 0; i < n; ++i)
		cin >> arr[i];

    vl prfx(n + 1, 0);
	partial_sum(arr.begin(), arr.end(), prfx.begin() + 1);

    vl sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());

    vl prfx_sort(n + 1, 0);
   	partial_sum(sorted_arr.begin(), sorted_arr.end(), prfx_sort.begin() + 1);

    int m; cin >> m;
    while (m--) 
	{
        int type, l, r;	cin >> type >> l >> r;
        if (type == 1)
            cout << prfx[r] - prfx[l - 1] << "\n";
        else
            cout << prfx_sort[r] - prfx_sort[l - 1] << "\n";
    }
    return 0;
}

