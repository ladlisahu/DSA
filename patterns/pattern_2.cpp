/*   Q.2 Write a Program to print mirrored right triangle star pattern.
        *
       **
      ***
     ****
    ***** 
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int k=n-1-i;k>0;k--)
        cout<<" ";
        
        for(int j=0;j<=i;j++)
        cout<<"*";

        cout<<endl;
    }
    return 0;
}