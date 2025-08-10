#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void FAST() {ios_base::sync_with_stdio(false);  cin.tie(NULL);}

int main() 
{
	FAST();

    int t;	cin >> t;
    

    while (t--) 
	{
        int n;   cin >> n;

        vector<int> a(n), b(n);

        for (int &x : a) cin >> x;

        for (int &x : b) cin >> x;

        int dd = 0;

        for (int i = 0; i < n; i++)
            if (a[i] > b[i]) 
				dd += (a[i] - b[i]);
        

        if (dd == 0)
			cout << 1;
        else 
			cout << dd + 1 ;
		cout << endl;
	}
    return 0;
}
