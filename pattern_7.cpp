/*
Q.7 Write a Program to print the Solid Half Diamond Number Pattern.	
5
54
543
5432
54321
543210
54321
5432
543
54
5
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>=n-i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }

    for(int i=n;i>=0;i--)
    {
        for(int j=n;j>=n-i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}