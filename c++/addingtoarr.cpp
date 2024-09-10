#include<iostream>
using namespace std;
int main()
{
int arr1[]={0,2,4,7,8,11,12,15};
int arr2[]={1,3,5,9,10,11,14};
int m=8;
int n=7;
int result[m+n];
int i=0;
int j=0; 
int k=0;
while(i<m and j<n){
    if(arr1[i]<arr2[j]){
    result[k]=arr1[i];
    k++;          
    i++;}
  else{
    result[k]=arr2[j];
   k++;
   j++;
  }
}
while(i<m){
    result[k]=arr1[i];
    i++;
    k++; 
}
while(j<n){
    result[k]=arr2[j];
    j++;
    k++;

}
for(int i=0;i<(m+n);i++){
    cout<<result[i];
}
return 0;
}