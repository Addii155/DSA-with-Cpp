#include<iostream>
using namespace std;
void leftrotate(int arr[],int n,int d){
    d=d%n;
    int temp[d];
        for(int i=0;i<d;i++){
    temp[i]=arr[i];
}
for(int i=d;i<n;i++){
    arr[i-d]=arr[i];
}

for(int i=n-d;i<n;i++){
       arr[i]=temp[i-(n-d)];
  
}for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main()
{
int n;
int d;
cout<<"enter no of element  and element to rotate in array \n";
cin>>n>>d;
int arr[n];
int temp[d];
cout<<" enter element of arr \n";
for(int i=0;i<n;i++){
    cin>>arr[i];}
    leftrotate(arr,n,d); 
     

return 0;
}