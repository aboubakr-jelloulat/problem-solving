#include <iostream>
using namespace std;

int main(void)
{
    long long width, height, flagstones;
    cin >> width >> height >> flagstones;

    long long tiles_width = width / flagstones;
    if (width % flagstones != 0)	tiles_width++;

    long long tiles_height = height / flagstones;
    if (height % flagstones != 0)	tiles_height++;

    cout << tiles_width * tiles_height << endl;

    return 0;
}
