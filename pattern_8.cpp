/*
Q.8 Write a Program to Print the Hollow Diamond Number Pattern.
    1    
   2 2
  3   3
 4     4
5       5
 4     4
  3   3
   2 2
    1
*/

#include<iostream>
using namespace std;

int  main()
    {
        int n;
        cin>>n;
        int c=1;
        for(int i=0;i<n;i++)
        {
           for(int k=n-i;k>0;k--)
            cout<<" ";
            
            cout<<c;
            for(int j=1;j<2*i;j++)
            cout<<" ";

            if(i!=0)
            cout<<c;

            c++;
            cout<<endl;
        }
        c=n-1;
        for(int i=n-1;i>0;i--)
        {
            for(int k=0;k<=n-i;k++)
            cout<<" ";
            
            cout<<c;
            for(int j=0;j<2*i-3;j++)
            cout<<" ";

            if(i!=1)
            cout<<c;

            c--;
            cout<<endl;
            
        }
        return 0;
    }
