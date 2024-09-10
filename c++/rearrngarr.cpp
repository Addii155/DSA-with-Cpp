#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={4,-3,1,2,5,7,9,8,10};
int n=9;
int i=0;
int j=n-1;
int result[n];
int k=n-1;
while(j>=i && k>=0){
    if(abs(arr[i])>abs(arr[j])){
        result[k]=arr[i]*arr[i];
        i++;
        k--;
    }
    else{
    result[k]=arr[j]*arr[j];
    j--;
    k--;}
}
sort(result,result+n);
for(i=0;i<n;i++){
    cout<<result[i]<<"  ";
}
return 0;
}