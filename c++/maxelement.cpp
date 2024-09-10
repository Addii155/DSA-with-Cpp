#include<iostream>
using namespace std;
int main()
{
int arr[]={1,2,3,6,15,17,18,61,91};
int i=0;
int n=9;
int max=0;
{
    for(i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }}

}
cout<<max;
return 0;
}