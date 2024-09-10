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
int mpp[13]={0};
for(int i=0;i<n;i++){
    mpp[arr[i]]+=1;
}
int q;
cin>>q;
while (q--)
{
    int num;
    cin>>num;
    cout<<mpp[num]<<endl;
}
return 0;
}