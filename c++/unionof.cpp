#include<iostream>
using namespace std;
int union1(int arr2[],int n,int arr1[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m ){
        if(arr1[i]<arr2[j]){
            if(arr3[k-1]!=arr1[i]){
            arr3[k++]=arr1[i++];}
        }else
            if(arr3[k-1]!=arr2[j]){
                arr3[j++]=arr2[j];
            }
        while(i<n){
               if(arr1[i]<arr2[j]){
            if(arr3[k-1]!=arr1[i]){
            arr3[k++]=arr1[i++];}}
        }
        while (j<m)
        {
                  if(arr3[k-1]!=arr2[j]){
                arr3[j++]=arr2[j];
            }
        }}
        return 0;
}
int main()
{
int arr1[6]={1,1,2,3,4,5};
int arr2[6]={2,3,4,4,5,6};
int arr3[12]={0};
union1(arr2,6,arr1,6,arr3);
for(int i:arr3){
    cout<<i<<" ";
}
return 0;
}