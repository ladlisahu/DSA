//  1+ 3 + 9 + 27 + 81.......
#include<bits/stdc++.h>
using namespace std;

void pattern(int n, int i)
{
    if(i==n)
    return;
    cout<<pow(3,i)<<" + ";
    pattern(n,i+1);
    
}

int main()
{
    int n;
    cin>>n;
    pattern(n,0);
    return 0;
}