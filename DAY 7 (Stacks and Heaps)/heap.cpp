#include<iostream>

using namespace std;

int main()
{
    int a = 10;                 //Store in Stack;
    int *p = new int();         

    *p = 10;                    //Allocation memory in heap;
    delete(p);                  

    p = new int[4];
    delete[]p;                  //Deallocation memory;

    p = NULL;                   //free the memory;

    return 0;
}