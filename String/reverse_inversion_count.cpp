#include<bits/stdc++.h>
using namespace std;
#define ll long long 

class Solution {
  public:
    int ans=0;
    void merge(vector<int>&arr,int l,int m,int r)
    {
        vector<int>temp;
        int j=l;
        for(int i=m+1;i<=r;i++)
        {
            while(j<=m && arr[j]<=2*arr[i])
            {
                j++;
            }
            ans+=(m-j+1);
        }
        int i=l;
        j=m+1;
        while(i<=m && j<=r)
        {
            if(arr[i]<arr[j])
            {
                temp.push_back(arr[i]);
                i++;
            }
            else
            {
                temp.push_back(arr[j]);
                j++;
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
        for(int i=0;i<temp.size();i++)
        {
            arr[l+i]=temp[i];
        }
    }
    void mergeSort(vector<int>&arr,int l,int r)
    {
        if(l>=r) return ;
        int m=(l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
    int countRevPairs(vector<int> &arr) {
        // Code here
        int n=arr.size();
        mergeSort(arr,0,n-1);
        return ans;
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
    cout<<obj.countRevPairs(arr)<<endl;
}
