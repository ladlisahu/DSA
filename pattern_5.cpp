/*
Q.5 Write a program to Print a solid Diamond Star Pattern.
     *      
    * *     
   * * *    
  * * * *   
 * * * * *  
* * * * * * 
 * * * * *  
  * * * *   
   * * *    
    * *
     *
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int k=n-i;k>0;k--)
        cout<<" ";

        for(int j=0;j<=i;j++)
        cout<<"* ";

        cout<<endl;
    }

    for(int i=n;i>0;i--)
    {
        for(int k=0;k<n-i;k++)
        cout<<" ";

        for(int j=0;j<=i;j++)
        cout<<"* ";

        cout<<endl;
    }
    return 0;
}
