#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size;  cin >> size;
    string value; cin >> value;
    int score = 0;
    for (int i = 0; i < value.size(); i++)
    {
        char c = value[i];
        switch (c)
        {
        case 'V':
            score += 5;
            break;
        case 'W':
            score += 2;
            break;
        case 'Z':
            if (i != value.size() - 1)
            {
                if (value[i + 1] == 'W')
                {
                    score /= 2;
                    value[i + 1] = '0'; // delete
                }
                else if (value[i + 1] == 'V')
                {
                    score /= 5;
                    value[i + 1] = '0';
                }
            }
            break;
        case 'Y':
            if (i != value.size() - 1)
            {
                value.push_back(value[i + 1]);
                value[i + 1] = '0';
            }
            break;
        case 'X':
            if (i != value.size() - 1)
            {
                value[i + 1] = '0';
            }
        }
    }
    cout << score << endl;
}