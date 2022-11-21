#include<iostream>
#include<algorithm>
#include<string>

// converting into upper case;
using namespace std;

int main()
{


    string str = "bfeuksbkvwa";

    // for(int i=0;i<str.length();i++)
    // {
    //     if(str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         str[i] -= 32;
    //     }
    // }

    transform(str.begin(),str.end(),str.begin(), :: toupper);
    cout<<str;
    return 0;
}