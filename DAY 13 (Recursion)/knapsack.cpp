#include<iostream>

using namespace std;

int knapsack(int value[],int weight[],int n,int W)
{
    if(n==0 || W==0)
        return 0;
    
    if(weight[n-1] > W)
        return knapsack(value,weight,n-1,W);
    return max(knapsack(value,weight,n-1,W-weight[n-1])+value[n-1],knapsack(value,weight,n-1,W));
}

int main()
{
    int wt[] = {10,20,30};
    int val[] = {100,50,150};

    cout<<knapsack(val,wt,3,50)<<endl;
    return 0;
}