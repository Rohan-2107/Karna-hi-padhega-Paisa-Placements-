#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string str = "bfeukasdabcbcamma";

    int freq[26];

    for(int i=0;i<26;i++)
    {
        freq[i] = 0;
    }

    for(int i=0;i<str.size();i++)
    {
        freq[str[i] - 'a']++; 
    }

    return 0;
}