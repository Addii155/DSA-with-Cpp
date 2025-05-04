//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void solve( vector<vector<pair<int, int>>>& adj,int i,int parent,vector<int>&isvis,
    vector<int>&res,int & ans,int sum
    )
    {
        isvis[i]=true;
        for(auto it:adj[i])
        {
            if(!isvis[it.first])
            {
                solve(adj,it.first,i,isvis,res,ans,sum+it.second);
            }
            else if(parent !=-1 && isvis[parent] )
            {
                ans=min(ans,sum+it.second);
            }
        }
        isvis[i]=0; 
    }
    int findMinCycle(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<pair<int, int>>> a(V);
        for(auto it:edges)
        {
            a[it[0]].push_back({it[1],it[2]});
            a[it[1]].push_back({it[0],it[2]});
        }
       
        vector<int>rec(V,0);
        int ans=INT_MAX;
        for(auto it:a)
        {
            
            for(auto i:it)
            {
                cout<<i.first<<" "<<i.second<<" ";
            }
            cout<<endl;
        }
        // for(int i=0;i<V;i++){
        //     vector<int>isvis(V,0);
        //     solve(adj,i,-1,isvis,rec,ans,0);
        // }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> edges;
        int i = 0;
        while (i++ < E) {
            int u, v, w;
            cin >> u >> v >> w;
            edges.push_back({u, v, w});
           
        }

        Solution obj;
        int res = obj.findMinCycle(V, edges);

        cout << res << endl;
    }

    return 0;
}
// } Driver Code Ends