#include<iostream>
using namespace std;
int main()
{
int arr[]={1,0,0,1,0,1,1,0};
int size=8;
int i=0;
int j=size-1;
int result[8];
int k=0;
for(int i=0;i<size;i++){
    if(arr[i]==0)
    {
        k++;
    }
    cout<<k<<endl;
}
for(int i=0;i<size;i++){
    if(i<k){
    arr[i]=0;}
else
    arr[i]=1; 
}
for(int i=0;i<size;i++){
    cout<<arr[i];
}
return 0;
}