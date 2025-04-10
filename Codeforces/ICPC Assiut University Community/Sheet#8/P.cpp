#include <iostream>
using namespace std;


int main(void)
{
    int event, crime = 0, officers = 0, output;   cin >> event;

    while (event--)
    {
        cin >> output;
    
        if (output > 0 && output <= 10)
           officers += output;
        if (output == -1)
        {
            if (officers > 0)
                officers--;
            else
                crime++;
        }

    }

    cout << crime << endl;


    return 0;
}
