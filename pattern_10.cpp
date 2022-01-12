/*
Q.10 Write a Program to Print Cross Sign (╳ ) Number Pattern.

1   1
 2 2
  3
 4 4
5   5

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<=n/2;i++)
    {
        for(int k=0;k<=i;k++)
        cout<<" ";

        cout<<i+1;
        for(int j=1;j<n-2*i-1;j++)
        cout<<" ";

        if(i!=n/2)
        cout<<i+1;

        cout<<endl;
    }
    int c=n/2+2;
    for(int i=0;i<n/2;i++)
    {
        for(int k=0;k<n/2-i;k++)
        cout<<" ";

        cout<<c;
        for(int j=0;j<2*i+1;j++)
        cout<<" ";

        // if(i!=n/2)
         cout<<c;
         c++;
        cout<<endl;
    }

    return 0;
}