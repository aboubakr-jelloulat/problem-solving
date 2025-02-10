#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int size, min, max, min_idx = 0, max_idx = 0;  cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; i++) cin >> arr[i];

    min = arr[0];
    max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            min_idx = i;
        }
            
        if (max < arr[i])
        {
            max = arr[i];
            max_idx = i;
        }
    }

    arr[max_idx] = min;
    arr[min_idx] = max;

    for (int i = 0; i < size; i++) cout << arr[i] <<  " ";

    return 0;
}
