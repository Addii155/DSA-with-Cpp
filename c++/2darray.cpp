#include<iostream>
using namespace std;
int sumrow(int arr[][3],int row,int col){
       for(int row=0;row<3;row++){
        int sum=0;
    for(int col=0;col<3;col++){
      sum+=arr[row][col];
    }
        cout<<"sum of row are->"<<sum<<endl;
    }
}
int main()
{
    int n,m;
    cout<<" enter no. of row and colomb-> "<<endl;
    cin>>n>>m;
int arr[3][3];
cout<<"enter element of array -> "<<endl;
for(int col=0;col<m;col++){
    for(int row=0;row<n;row++){
        cin>>arr[row][col];
    }
}
for(int col=0;col<m;col++){
    for(int row=0;row<n;row++){
        cout<<arr[row][col];
    }
    cout<<endl;
}
sumrow(arr,3,3);
/*cout<<"print the element of array->"<<endl;
for(int col=0;col<m;col++){
    if(col%2!=0){
    for(int row=n;row>0;row--){
        cout<<arr[col][row];
      }}
     cout<<endl;
    else {
        for(int row=0;row<n;row++){
            cout<<[col][row];
        }
        cout<<endl;
    }
} 
   /* cout<<endl;
 */
return 0;
}