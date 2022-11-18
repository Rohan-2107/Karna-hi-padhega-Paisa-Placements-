#include<iostream>

using namespace std;

// The Function never uses the actual value from the main function rather it uses a copy of it...thats y pointers are used;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2;
    int b = 4;

    // int *p = &a,*q = &b;
    swap(&a,&b);
    cout<<a<<" "<<b;

    return 0;
}