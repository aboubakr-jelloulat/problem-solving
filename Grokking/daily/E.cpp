#include <iostream>
using namespace std;

long long fact(long long n)
{
    if (n <= 1) 
        return 1;
    return n * fact(n - 1);
}

int main()
{
    long long n;  cin >> n;
    
    string str = to_string(fact(n));
    
    int len = str.length() - 1;
    
    int count = 0;

    // cout << str << endl;
    
    while (len > 0)
    {
        if (str[len] == '0')
        {
            count ++;
        }
        else
            break ;
            
        len --;
    }
    
    cout << count << endl;
    
    return 0;
}
