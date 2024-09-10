#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool searchelement(vector<vector<int>>&mat,int target){
    int n=mat.size();
    int m=mat[0].size();
    int i=0,j=m-1;
    while(i<n&&j>=0){
        if(mat[i][j]==target)
        return true;
       else if(mat[i][j]<target){
            i++;
            j--;
        }
        else 
        j--;
    }
    return false;
}
int main()
{
vector<vector<int>>mat={{1,4,7,11,15},{2,5,8,12,19},
{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}
};
searchelement(mat,40)==true?cout<<"True\n":cout<<"False\n";
return 0;
}