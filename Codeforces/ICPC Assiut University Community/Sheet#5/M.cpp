#include <iostream>
#include <algorithm>
using namespace std;

int Distinct_Numbers(int *arr, int n) 
{
    for (int i = 0; i < n; ++i) 
        cin >> arr[i];

    sort(arr, arr + n);

    int counter = 1;
    for (int i = 1; i < n; ++i) 
        if (arr[i] != arr[i - 1]) 
            ++counter;

    return counter;
}

int main() 
{
    int n;
    cin >> n;
	if (n == 0)
	{
		cout << 0 << endl;
		return 0;
	}
    int *arr = new int[n];

    cout << Distinct_Numbers(arr, n) << endl;

    delete[] arr;
    return 0;
}
