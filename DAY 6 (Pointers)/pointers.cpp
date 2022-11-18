#include<iostream>

using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    *ptr = 20;
    cout<<"\n";
    cout<<*ptr<<endl;
    cout<<ptr;
    return 0;
}