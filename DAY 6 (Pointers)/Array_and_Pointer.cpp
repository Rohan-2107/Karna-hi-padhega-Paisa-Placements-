#include<iostream>

using namespace std;

int main()
{
    int arr[] = {10,20,30};
    cout<<*arr<<endl; 

    //Since array is a contigous allocation of memory the int type pointer increases the memory address space by int size
    cout<<"\n";

    int *ptr = arr;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    cout<<"\n";

    //Note :  *arr++ is illegal
    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i)<<endl;
    }
    return 0;
}