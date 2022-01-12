/*
Q.6 Write a Program to print the Full Pyramid Number Pattern.
    1
   321
  54321
 7654321
987654321
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=1;
    for(int i=0;i<n;i++)
    {
        for(int k=n-1-i;k>0;k--)
        cout<<" ";

        int itr=c;
        for(int j=itr;j>0;j--){
        cout<<j;
        }

        cout<<endl;
        c=c+2;
    }
    return 0;
}