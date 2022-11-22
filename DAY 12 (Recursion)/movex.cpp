#include<iostream>

using namespace std;

string movex(string s)
{
    if(s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = movex(s.substr(1));
    if(ch == 'x' || ch == 'X')
        return ans+ch;
    else
        return ch+ans;
}

int main()
{
    cout<<movex("bxukXfxeafkxxncilc");
    return 0;
}