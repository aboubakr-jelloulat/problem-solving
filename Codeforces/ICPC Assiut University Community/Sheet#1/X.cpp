#include <iostream>

using namespace std;

int main(void)
{
    long l1, l2, r1, r2, min_right, max_left;  
    cin >> l1 >> r1 >> l2 >> r2;

    max_left = (l1 > l2) ? l1 : l2;
    min_right = (r1 < r2) ? r1 : r2;

    (max_left <= min_right) ? cout << max_left << " " << min_right << endl : cout << -1;

    return 0;
}
