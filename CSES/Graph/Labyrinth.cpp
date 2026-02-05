#include <iostream>
#include <vector>
using namespace std;
 
#define ll long long
 
const int N=1e3 + 2;
int n, m, ans; char arr[N][N];

vector <char> str;
 
bool IsValid(int x, int y) 
{
    return x >= 0 && x < n && y >= 0 && y < m && (arr[x][y] == '.' || arr[x][y] == 'B');
}


void dfs(int x, int y)
{
    arr[x][y] = '#'; // make it visited

    if (IsValid(arr[x][y]) && arr[x+1][y] == '.')
    {
        ans++;
        str.push_front('R')
        dfs(x, y);

    }


    else if (IsValid(arr[x][y]) && arr[x+1][y] == '.')
    {
        ans++;
        str.push_front('L')
        dfs(x, y);

    }
    
    else if (IsValid(arr[x][y]) && arr[x][y+1] == '.')
    {
        ans++;
        str.push_front('D')
        dfs(x, y);

    }
    
    else if (IsValid(arr[x][y]) && arr[x][y-1] == '.')
    {
        ans++;
        str.push_front('U')
        dfs(x, y);

    }

}

int  main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> arr[i][j];

    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++)
        if (arr[i][j] == 'A')
            dfs(i, j);


    cout << ans << endl;
    for (char &x : str)
        cout << x;
    cout << endl;

    return 0;
}
