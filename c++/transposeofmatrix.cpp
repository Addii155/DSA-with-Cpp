#include<iostream>
using namespace std;
int main()
{
int n,m;
cout<<" enter no. of row and coloumb->"<<endl;
cin>>n>>m;    
int arr[n][m];
cout<<" enter element of matrix ->"<<endl;
for(int row=0;row<n;row++){
    for(int col=0;col<m;col++){
        cin>>arr[row][col];
    }
}for(int row=0;row<n;row++){
    for(int col=0;col<m;col++){
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
}
cout<<" Transpose of of matrix->"<<endl;
for(int row=0;row<m;row++){
    for(int col=0;col<n;col++){
        cout<<arr[col][row]<<"  ";
    }
    cout<<endl;
}
return 0;
}