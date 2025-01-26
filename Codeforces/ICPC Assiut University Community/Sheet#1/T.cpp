#include <iostream>

using namespace std;

void ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

void sortNumber(int &a, int &b, int &c)
{
    if (a > b) ft_swap(&a, &b);
    if (a > c) ft_swap(&a, &c);
    if (b > c) ft_swap(&b, &c);
}

int main(void)
{
    int a, b, c, tmp_a, tmp_b, tmp_c;

    cin >> a >> b >> c;

	tmp_a	=	a;
	tmp_b	= 	b;
	tmp_c	=	c;

    sortNumber(a, b, c);

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

	cout << endl << tmp_a << endl << tmp_b << endl << tmp_c; 

    return 0;
}
