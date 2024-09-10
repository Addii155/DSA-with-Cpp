#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int zeroatlast(int arr[],int n){
    int i=0,k=0;
    int arr1[6]={0};
    while (i<n){
      if(arr[i]!=0){
        arr1[k++]=arr[i++];
      }
    }    for(int i=0;i<6;i++){
        cout<<arr1[i]<<" ";
    }
    return 0 ;
}
int main()
{
int arr[6]={0,2,4,0,5,0};
int arr1[6]={0};
zeroatlast(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr1[i]<<" ";
    }
return 0;
}