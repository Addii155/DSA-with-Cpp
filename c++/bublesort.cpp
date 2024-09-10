#include<iostream>
using namespace std;
int bubblesort(int arr[],int n){
  for(int i=1;i<n;i++){
    bool swapped=false;
    for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;}
    }
    if(swapped==false)
    break;
  }for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
int main()
{
int odd[7]={8,7,9,3,2,1,5};
bubblesort(odd,7);
return 0;
}