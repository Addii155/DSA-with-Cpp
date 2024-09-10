#include<iostream>
using namespace std;
void traverse(int arr[],int id,int size)
{
    if(id==size) return;
    cout<<arr[id]<<" ";
    traverse(arr,id+1,size);

}
int maxvalue(int arr[],int id,int size,int mx )
{
    if(id==size) return mx;
    mx=max(mx,arr[id]);
    maxvalue(arr,id+1,size,mx);

}
int main(){
    int arr[]={10,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n<<'\n';
    // traverse(arr,0,n);
    int mx=maxvalue(arr,0,n,-1);
    cout<<mx<<endl;
}