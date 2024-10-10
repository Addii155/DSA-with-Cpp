#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int i,int n)
{
    if(i>n-1) return true;
    if(arr[i-1]>arr[i] ) return false;
    return isSorted(arr,i+1,n);

}
int main()
{
    int arr[]={2,3,5,6,7,8,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    if(isSorted(arr,1,n))
    {
        cout<<"array is sorted";
    }
    else
    {
        cout<<"not sorted";
    }
}