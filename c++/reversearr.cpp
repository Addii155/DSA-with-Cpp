#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reversearr(int arr[],int n){
    int s=0,e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main()
{
int arr[6]={1,2,3,4,5,6};
reversearr(arr,6);
return 0;
}