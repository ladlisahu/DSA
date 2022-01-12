/* Q.4 Given the value of n, print the arrow pattern. 
Input: n = 5
Output: 
 *
  **
   ***
    ****
     *****
    ****
   ***
  **
 *                           */


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        cout<<" ";

        for(int k=0;k<=i;k++)
        cout<<"*";

        cout<<endl;
    }

    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        cout<<" ";

        for(int k=0;k<i;k++)
        cout<<"*";
        
        cout<<endl;
    }
    return 0;
}