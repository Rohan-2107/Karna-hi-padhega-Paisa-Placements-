#include<iostream>

using namespace std;

void toh(int n,char src,char dest,char help)
{
    if(n == 0)
        return;
    
    toh(n-1,src,help,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    toh(n-1,help,dest,src);
}

int main()
{
    toh(4,'A','C','B');
    return 0;
}