#include<iostream>

using namespace std;

int clearBit(int n,int pos)
{
    int mask = ~(1<<pos);
    return (n & mask);
}

int main()
{
    cout<<clearBit(5,0)<<endl;
    return 0;
}


//Note : Update Bit is nothing but clear bit then set bit;