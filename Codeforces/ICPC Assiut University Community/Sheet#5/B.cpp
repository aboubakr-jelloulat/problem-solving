#include <iostream>
#include <algorithm>
using namespace std;

void print(int nb)
{
    int i;
    for (i = 1; i < nb; i++)
        cout << i << " ";
    cout << i;
}

int main(void)
{
    int nb; cin >> nb;
    print(nb);
    return 0;
}
