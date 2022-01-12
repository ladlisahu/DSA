#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
    return n;
    
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n,sum=0,c=1;
    cin>>n;
    for(int i=1;i<n;i++)
    sum+=i;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
        cout<<fib(c)<<" ";
        c++;
        }

        cout<<endl;
    }
    return 0;
}