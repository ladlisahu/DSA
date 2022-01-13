/*
Q.5 Program to print diagonal star patterns. 
For the given input, this program prints the following pattern. The input must be an odd number.
Input: 7
Output:

    *******
    **   **
    * * * *
    *  *  *
    * * * *
    **   **
    *******
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j || (i+j)==n || i==1 ||i==n ||j==1 ||j==n)
            cout<<"*";

            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}