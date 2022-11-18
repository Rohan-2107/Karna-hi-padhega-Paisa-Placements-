#include<iostream>

using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    int **q = &p;

    cout<<*q<<endl;             //Deferenced single time
    cout<<**q<<endl;            //Dereferneced two times

    return 0;
}