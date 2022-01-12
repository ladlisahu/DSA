//  1+ 1/3 + 1/9 + 1/27 + 1/81.......
#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    if(n==0)
    return;
    
    pattern(n-1);
    cout<<n<<"^"<<n<<" + ";
}

int main()
{
    int n;
    cin>>n;
    pattern(n);
    return 0;
}