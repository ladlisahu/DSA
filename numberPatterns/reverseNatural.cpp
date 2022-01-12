#include<iostream>
using namespace std;

void revNat(int n)
{
    if(n==0)
    return;

    cout<<n<<" ";
    revNat(n-1); 
}

int main()
{
    int n;
    cin>>n;
    revNat(n);
    return 0;
}