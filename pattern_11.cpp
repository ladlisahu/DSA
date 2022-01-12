/*
Q.1 Write a Program to print a butterfly shape Number pattern.
1     7
12   67
123 567
1234567
123 567
12   67
1     7
*/

#include<iostream>
using namespace std;

int main()
{
    int n,p;
    cin>>n;
    for(int i=1;i<=n/2+1;i++)
    {
        p=0;
        for(int j=1;j<=i;j++)
        cout<<j;

        for(int k=0;k<n-2*i;k++){
        cout<<" ";
        p++;
        }

        for(int j=p+i+1;j<=n;j++)
        cout<<j;

        cout<<endl;
    }

    for(int i=n/2;i>0;i--)
    {
         p=0;
        for(int j=1;j<=i;j++)
        cout<<j;

        for(int k=0;k<n-2*i;k++){
        cout<<" ";
        p++;
        }

        for(int j=p+i+1;j<=n;j++)
        cout<<j;

        cout<<endl;
    }
    return 0;
}