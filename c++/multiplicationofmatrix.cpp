#include<iostream>
using namespace std;
int main()
{
int n,m,p,q,sum;
cout<<"enter no of rows and colomb of first matrix-> "<<endl;
cin>>n>>m;
int arr1[n][m];
cout<<" enter element of first matrix->"<<endl;
for(int row=0;row<n;row++){
    for(int col=0;col<m;col++){
        cin>>arr1[row][col];
    }
}
cout<<"enter no of rows and column of second matrix-> "<<endl;
cin>>p>>q;
int arr2[p][q];
cout<<" enter element of second matrix->" <<endl;
for(int row=0;row<p;row++){
    for(int col=0;col<q;col++){
        cin>>arr2[row][col];
    }
}for(int row=0;row<n;row++){
    for(int col=0;col<m;col++){
        cout<<arr1[row][col]<<"  ";
    }
    cout<<endl;
  
}
 int arr3[n][q]={0};
 for(int row=0;row<p;row++){
    for(int col=0;col<q;col++){
        cout<<arr2[row][col]<<"  ";
    }
    cout<<endl;}
if(m!=p){
    cout<<"mutiplication of these matrix is not possible "<<endl;
}else{
cout<<"multiplication of matrix is-> "<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
     sum=0;
     for(int k=0;k<p;k++){
        sum+=arr1[i][k]*arr2[k][j];
     }
     arr3[i][j]=sum;
    }
}for(int row=0;row<n;row++){
    for(int col=0;col<q;col++){
        cout<<arr3[row][col]<<"  ";
    }
    cout<<endl;
}
}
return 0;
}