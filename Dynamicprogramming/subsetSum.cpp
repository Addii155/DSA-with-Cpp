#include<bits/stdc++.h>
using namespace std;

bool subsetSumTopDown(vector<int>&v, int i, int tar)
{
    if(i<0 || tar< 0) return false;
    if(tar==0) return true;
    
    return subsetSumTopDown(v, i-1 , tar) || subsetSumTopDown(v, i-1, tar-v[i]);
}

int main()
{
    vector<int>v={2,2,2};
    int n=v.size();
    int tar=5;

    bool ispossible =  subsetSumTopDown(v,n-1,tar);

    cout<<"here is result-> " << (bool)ispossible << endl;

}