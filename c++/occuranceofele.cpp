#include<iostream>
using namespace std;
int firoccurence(int arr[],int n,int key){
    int ans;
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
        ans=mid;
        e=mid-1;}
        else if(arr[mid]>key){
            e=mid-1;
        }else if(arr[mid]<key){
            s=mid+1;
        }
             mid=s+(e-s)/2;
    }
    return ans;
}
int lastoccurence(int arr[],int n,int key){
      int ans;
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
        ans=mid;
        s=mid+1;}
        else if(arr[mid]>key){
            e=mid-1;
        }else if(arr[mid]<key){
            s=mid+1;
        }
             mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
int arr[11]={3,3,3,3,3,3,3,3,3,3,3};
cout<<"FIRST OCCURENCE OF 3 IS->"<<firoccurence(arr,11,3)<<endl;
cout<<"LAST OCCURENCE OF 3  IS->"<<lastoccurence(arr,11,3)<<endl;
return 0;
}