#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<"before sorting"<<endl;

    for(int i=0;i<n;i++)    
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // selection sort
    for(int i=0;i<n-1;i++)
    {
        int min=arr[i];
        int idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                idx=j;
            }
        }
        swap(arr[i],arr[idx]);
    }

    cout<<"after sorting"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}