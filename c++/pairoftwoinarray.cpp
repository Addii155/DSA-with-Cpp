#include<iostream>
using namespace std;
int main()
{
int arr[] = {-2,-1,0,2,4,5,7,8,10,11,12};
int n=11;
int x=50;
int i=0;
int j=n-1;
bool found=false;
while(i<j){
    if( arr[i]+arr[j]==x){
        found=true;
        break;f
    }
    else if(arr[i]+arr[j]<x){
        i++;
        }
else{
    j--;}}
if(found ==true)
cout<<"yes"<<endl;
else
cout<<"NO"<<endl;

return 0;
}