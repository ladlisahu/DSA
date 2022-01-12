#include<iostream>
using namespace std;

bool prime(int n, int i=2)
{
    if(n==2)
    return true;
    // if(n<2)
    // return false;

    if(n%i==0)
    return false;
    if(i*i>n)
    return true;
    return prime(n,i+2);
}

int main()
{
    int n;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(prime(i))
        cout<<i<<" ";
    }
    
    return 0;
}