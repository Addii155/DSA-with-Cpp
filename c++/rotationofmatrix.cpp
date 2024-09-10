#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j];
    }cout<<endl;
}
for(int i=0;i<2;i++){
    for(int j=i+1;j<3;j++){
        swap(arr[j][i],arr[i][j]);
    }
}
int j=2,i=0;
 while(i<=j){
        swap(arr[i],arr[j]);
        i++,j--;
    }
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j];
    }cout<<endl;
}
return 0;
}