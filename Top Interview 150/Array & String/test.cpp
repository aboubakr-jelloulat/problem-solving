#include <bits/stdc++.h>

using namespace std;

string findMajorityParty(vector<string>& votes) 
{
    int count = 0;
    string candidate = "";
    
    for (string vote : votes) 
    {
        if (count == 0) 
            candidate = vote;
        count += (vote == candidate) ? 1 : -1;
    }
    
    count = 0;
    for (string vote : votes)
        if (vote == candidate)
            count++;
    
    return (count > votes.size() / 2) ? candidate : "NO_MAJORITY";
}

int main() 
{
    vector<string> votes = {"Socialist", "Conservative", "Socialist", "Liberal", 
                           "Socialist", "Socialist", "Conservative", "Socialist"};
    

    cout << "Winner: " << findMajorityParty(votes) << endl;
    
    return 0;
}
