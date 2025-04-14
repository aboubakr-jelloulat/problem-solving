#include <iostream>
#include <string>
using namespace std;

string  ReadUserdInput()
{
    string  Input;  cin >> Input;

    return Input;
}

long long   IlyaAndBankAccount(string   Account)
{
    string      permute;
    long long   Original, DeleteLast, DeletBeforeLast, max;
    char        last = Account[Account.length() - 1];

    Original        =   stol(Account);
    permute         =   Account.erase(Account.length() - 1);
    DeleteLast      = stol(permute);

    permute         = "";
    permute         =  Account.erase(Account.length() - 1);
    permute         += last;
    DeletBeforeLast =  stol(permute);


    if (Original >= DeleteLast && Original >= DeletBeforeLast)
    {
        max = Original;
    }
    else
    {
        if (DeleteLast > DeletBeforeLast)
            max = DeleteLast;
        else
            max = DeletBeforeLast;
    }
    
    return (max);
}


int main(void)
{
    
    cout << IlyaAndBankAccount(ReadUserdInput()) << endl;

    return 0;
}