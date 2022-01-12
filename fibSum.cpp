#include<bits/stdc++.h>
using namespace std;

int fibSum(int n)
{
    if(n==0 || n==1)
    return n;

    return fibSum(n-1) + fibSum(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fibSum(n);
    return 0;
}