#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s )/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            s=mid+1;
        }else{
        e=mid-1;}
        mid=s+(e-s)/2;
    }
    return -1;
    }
int main()
{
int even[6]={2,4,6,7,8,9};
int odd[5]={3,6,7,8,9};
int ans=binarysearch(even,6,8);
cout<<" index of 2 is->"<<ans<<endl;
cout<<"odd binary searh->"<<binarysearch(odd,5,7);
return 0;
}