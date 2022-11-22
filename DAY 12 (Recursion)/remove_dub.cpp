#include<iostream>

using namespace std;

string remove_dub(string s)
{
    if(s.length() == 0)
        return "";
    
    char ch = s[0];
    string ans = remove_dub(s.substr(1));
    if(ch == ans[0])
        return ans;
    else
        return (ch + ans);
}

int main()
{
    cout<<remove_dub("aaabbbbbcccc");
    return 0;
}