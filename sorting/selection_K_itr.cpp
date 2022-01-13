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
    int min, idx;
    
        for(int i=0;i<n-1;i++)
        {
            min=arr[i];
            idx=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[i])
                {
                    min=arr[j];
                    idx=j;
                }
            }
            swap(arr[i],arr[idx]);

            if(c<=k){
                for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
                cout<<endl;
                c++;
            }
        }
        
    return 0;
}