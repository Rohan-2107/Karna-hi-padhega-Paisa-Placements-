#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;

    bool flag = 0;

    for(int i=2;i<sqrt(n);i++) // because if n = a*b and a <= b then a*a <= a*b = n
    {
        if(n%i == 0)
        {
            cout<<"Not a Prime Number!"<<endl;
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout<<"prime"<<endl;
    }
    return 0;
}