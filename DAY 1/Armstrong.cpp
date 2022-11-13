#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum = 0;
    int original = n;
    while(n>0)
    {
        int last_digit = n%10;
        sum += pow(last_digit,3);
        n = n/10;
    }
    //cout<<sum;
    if(sum == original)
        cout<<"Armstrong";
    else
        cout<<"not Armstring";
    return 0; 
}