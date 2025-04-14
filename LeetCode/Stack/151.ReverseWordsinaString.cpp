class Solution {
public:


vector <string> ft_split(string s, string seperator = " ")
{
    vector <string> vString;
    string          line = "";


    int pos = 0;
    while ((pos = s.find(seperator)) != string::npos)
    {
        line = s.substr(0, pos);
        if (line != "")
        {
            vString.push_back(line);
        }
        s.erase(0, pos + seperator.length());
    }
    if (s != "")
    {
        vString.push_back(s);
    }
    return vString;
}

 string reverseWords(string s) 
{
    string result = "";
    stack <string> stk;
    vector <string> split = ft_split(s);

    for (string &s : split)
    {
        stk.push(s);
    }
    while (!stk.empty())
    {
        result += stk.top();
        stk.pop();
        result += " ";
    }
    if (!result.empty() && result.back() == ' ')
        result.pop_back();


    return result;
}
   
    
};