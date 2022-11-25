#include<iostream>

using namespace std;

int pairup(int n)
{
    if(n==0 || n==1)
        return n;
    if(n==2)
        return n;

    return pairup(n-1) + pairup(n-2)*(n-1);
}

int main()
{
    cout<<pairup(4); 
    return 0;
}