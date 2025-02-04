#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dir={{0,1},{0,-1},{1,0},{-1,0}};
int orangesRotting(vector<vector<int>>& grid) {
    int n=grid.size(),m=grid[0].size();
    int goodOranges=0;
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){
                q.push({i,j});
            }else if(grid[i][j]==1){
                goodOranges++;
            }
        }
    }
    int time=0;
    q.push({-1,-1});
    while(!q.empty()){
        int size=q.size();
        auto cell=q.front();
        q.pop();
        if(cell.first==-1 && cell.second==-1)
        {
            time++;
            if(!q.empty())
            {
                q.push({-1,-1});
            }else break;
        }else{
            for(auto d:dir){
                int xdir=cell.first+d[0];
                int ydir=cell.second+d[1];
                if(xdir>n-1 or xdir<0 or ydir>m-1 or ydir<0) continue;
                if(grid[xdir][ydir]==2 or grid[xdir][ydir]==0) continue;
                   grid[xdir][ydir]=2;
                   goodOranges--;
                   q.push({xdir,ydir});
                }
            }
        }
    return goodOranges == 0 ? time-1 : -1; 
}

int main()
{
    vector<vector<int>> grid={{2,1,1},{1,1,0},{0,1,1}};
    cout<<orangesRotting(grid)<<endl;
    return 0;
}