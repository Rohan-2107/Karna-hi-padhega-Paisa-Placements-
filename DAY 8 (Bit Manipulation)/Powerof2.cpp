#include<iostream>

/* n = 6 = 0110
 n-1 = 5 = 0101

 using & operator
 (n & n-1) will have same bit as n except the right most set bit 

 (0110 & 0101) = 0100

 (1000 & 0111) = 0000
*/

using namespace std;

bool ispower2(int n)
{
    return (n && !(n & n-1));
}
int main()
{
    cout<<ispower2(16);

    return 0;
}