#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

void HelpfulMaths(string s)
{
    vector<int> numbers;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            numbers.push_back(s[i] - '0');
        }
        
    }


    sort(numbers.begin(), numbers.end());

    s = "";

    for (int i = 0; i < numbers.size(); i++)
    {
        s += to_string(numbers[i]);
    
        if (i < numbers.size() - 1)
        {
            s += '+';
        }
    }

    cout << s << endl;
}

int main(void)
{
    string  s;   cin >> s;

    HelpfulMaths(s);

    return 0;
}
