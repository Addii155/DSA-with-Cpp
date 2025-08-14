#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
  public:
    int merge(vector<int>&arr,int l,int m ,int r)
    {
        int c=0;
        vector<int>temp;
        int i=l,j=m+1;
        while(i<=m && j<=r)
        {
            if(arr[i]<=arr[j])
            {
                temp.push_back(arr[i]);
                i++;
            }
            else
            {
                temp.push_back(arr[j]);
                j++;
                c+=(m-i+1);
            }
        }
        while(i<=m)
        {
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=r)
        {
            temp.push_back(arr[j]);
            j++;
        }
        for(int i=l;i<=r;i++)
        {
            arr[i]=temp[i-l];
        }
        return c;
    }
    int mergeSort(vector<int>&arr,int l,int r)
    {
        if(l>=r) return 0;
        int c=0;
        int m=(l+r)/2;
        c+=mergeSort(arr,l,m);
        c+=mergeSort(arr,m+1,r);
        c+=merge(arr,l,m,r);
        return c;
    }
    int inversionCount(vector<int> &arr) {
        
        int n=arr.size();
        return mergeSort(arr,0,n-1);
        
    }
};

int main()
{
    int n;
    vector<int>arr;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    Solution obj;
    cout<<obj.inversionCount(arr)<<endl;

    
}