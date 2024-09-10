#include<iostream>
using namespace std;
int insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
            arr[j+1]=arr[j];
            j--;}
        else {
        break;}
    }
    arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main()
{
int arr[8]={7,8,2,4,5,6,1,11};
insertionsort(arr,8);
return 0;
}