//  1+ 1/2 + 1/4 + 1/8.......
#include<bits/stdc++.h>
using namespace std;

void pattern(int n, int i)
{
    if(i==n)
    return;

    cout<<"1/"<<pow(2,i)<<" + ";
    pattern(n,i+1);
}

int main()
{
    int n;
    cin>>n;
    pattern(n,0);
    return 0;
}