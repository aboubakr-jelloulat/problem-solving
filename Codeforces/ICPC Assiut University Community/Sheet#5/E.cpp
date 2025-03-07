#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

void ft_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int a, b; cin >> a >> b;
    ft_swap(&a, &b);
    cout << a << " " << b;

    return 0;
}
