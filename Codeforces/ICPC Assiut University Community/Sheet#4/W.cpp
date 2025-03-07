#include <iostream>
#include <algorithm>
using namespace std;

void Encryption(string s, string key, string original)
{
    /*
        Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-

        Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789
    */
    int u = 0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int u = 0; u < original.length(); u++)
        {
            if (s[i] == original[u])
            {
                cout << key[u];
                break;
            }
        }
    }
}

void Decryption(string s, string key, string original)
{
    int u = 0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int u = 0; u < key.length(); u++)
            if (s[i] == key[u])
            {
                cout << original[u];
                break;
            }
    }
}

int main(void)
{
    string key =  "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original =  "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int q;     cin >> q;
    string s;  cin >> s;

    if (q == 1)
        Encryption(s, key, original);
    else if (q == 2)
        Decryption(s, key, original);

    return 0;
}