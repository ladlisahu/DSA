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
    while(c<=k){
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            swap(arr[i], arr[i+1]);
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
        c++;
    }

    return 0;
}