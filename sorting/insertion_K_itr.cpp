#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    int c=1;
    
        for(int i=1;i<n;i++)
        {
            int temp=arr[i];
            int j=i-1;
            while(j>=0 && temp<arr[j])
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;

            if(c<=k){
                for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
                cout<<endl;
                c++;
            }
        }
    return 0;
}