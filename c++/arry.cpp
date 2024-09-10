#include<iostream>
using namespace std;
int main()
{
int arr[]={8,7,6,5,4,3,2};
int i=0;
int n=7;
int j=6;
for(i=0;i<n;i++){
    arr[i]=arr[i]*arr[i];
}
for(i=0;i<n;i++){
    cout<<arr[n-1-i]<<endl;
}
return 0;
}