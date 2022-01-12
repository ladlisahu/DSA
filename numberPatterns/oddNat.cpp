#include<iostream>
using namespace std;

void oddNat(int n)
{
    if(n==0)
    return;

    oddNat(n-1);
    if(n%2!=0)
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    oddNat(n);
    return 0;
}