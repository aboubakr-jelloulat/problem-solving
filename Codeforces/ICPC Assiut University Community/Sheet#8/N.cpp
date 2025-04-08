#include <iostream>
#include <vector>
using namespace std;


int  Cakeminator() // O(n^2)
{
    int row,  col;  cin >> row >> col;

    vector <int> ArrRow(row, 0);
    vector <int> ArrCol(col, 0);

    string Line;

    for (int i = 0; i < row; i++)
    {
        cin >> Line;
        for (int j = 0; j < col; j++)
        {
            if (Line[j] == 'S')
            {
                ArrCol[j] = 1;
                ArrRow[i] = 1;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ArrCol[j] == 0 || ArrRow[i] == 0)
                sum ++;
        }
    }
    return sum;
}

int main(void)
{
    cout << Cakeminator()  << endl;

    return 0;
}