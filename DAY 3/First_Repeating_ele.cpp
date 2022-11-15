//Given a array with size n the task is to find the first repeating element in the array if intergers , ie an element that occurs more than once and whose is index of first occurence is smallest

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    const int N = 1000;
    int indx[N];
    for(int i=0;i<N;i++)
    {
        indx[i] = -1; 
    }

    int minindx = INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(indx[a[i]]!=-1)
            minindx = min(minindx,indx[a[i]]);
        else
            indx[a[i]] = i;
    }

    if(minindx == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minindx + 1<<endl;
    }
    return 0;
}