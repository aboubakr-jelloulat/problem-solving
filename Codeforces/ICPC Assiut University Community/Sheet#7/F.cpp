#include <iostream>
#include <algorithm>
using namespace std;


void PrintEvenIndices(int arr[], int len, int index)
{
    if (index > len - 1)
        return ;

    PrintEvenIndices(arr, len, index + 2);
    cout << arr[index]  << " ";
}

int main(void)
{
    int nb;  cin >> nb;
    int arr[nb];

    for (int i = 0; i < nb; i++) cin >> arr[i];
    PrintEvenIndices(arr, nb, 0);

    return 0;
}
