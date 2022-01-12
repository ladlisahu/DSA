//  1+ 2 + 4 + 8 + 16.......
#include<bits/stdc++.h>
using namespace std;

void pattern(int n, int i)
{
    if(i==n)
    return;
    cout<<pow(2,i)<<" + ";
    pattern(n,i+1);
    
}

int main()
{
    int n;
    cin>>n;
    pattern(n,0);
    return 0;
}