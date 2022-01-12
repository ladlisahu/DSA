#include<iostream>
using namespace std;

void evenNat(int n)
{
    if(n==0)
    return;

    evenNat(n-1);
    if(n%2==0)
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    evenNat(n);
    return 0;
}