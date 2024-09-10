#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int mx=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]>mx){
        mx=arr[i];}
        
}
cout<<mx<<endl;
int sec=-1;
 for(int i=0;i<n;i++){
    if(mx!=arr[i]){
      if(arr[i]>sec){
        sec=arr[i];
      }
    }
}
cout<<sec;
return 0;
}