#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void seletionsort(int arr[],int n){
    for(int i=0;i<n-2;i++){
      int min= i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[i]){min=j;}}
               // int temp = arr[min];
               // arr[min] = arr[i];
             //   arr[i]= temp;
          swap(arr[i],arr[min]); 
        } 
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
seletionsort(arr ,n);

return 0;
}
 
