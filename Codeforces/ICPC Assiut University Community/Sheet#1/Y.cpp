#include <iostream>

using namespace std;

/*
    ✅ To avoid overflow, you need to apply the modulo operation during the multiplication process, not just at the end.
    This ensures that the intermediate results never exceed the limits of long long.

*/

int main(void)
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    
    long long result = 1;
    result = (result * a) % 100;
    result = (result * b) % 100;
    result = (result * c) % 100;
    result = (result * d) % 100;

    (result < 10)  ? cout << "0" << result : cout << result;

    return 0;
}
