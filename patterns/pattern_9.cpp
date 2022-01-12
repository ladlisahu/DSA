/*
Q.9 Write a Program to Print the V Shape Alphabet Pattern.

E       E 
 D     D
  C   C
   B B
    A  
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
   for(int i=n;i>0;i--)
    {
        for(int k=0;k<n-i;k++)
        cout<<" ";

        cout<<(char)(65+i-1);
        for(int j=0;j<2*i-3;j++)
            cout<<" ";

            if(i!=1)
            cout<<(char)(65+i-1);
        cout<<endl;
    }
    return 0;
}