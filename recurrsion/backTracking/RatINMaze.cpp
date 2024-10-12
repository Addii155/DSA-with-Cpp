#include<bits/stdc++.h>
using namespace std;
  bool isSafe(vector<vector<int>>&arr,int &r,int &c,int x,int y,vector<vector<bool>>&isvisited)
   {
       if( ( x>=0 && y>=0) && (x<r && y < c) && isvisited[x][y]==false && arr[x][y]==1) return true;
       return false;
   }
    void helper(vector<vector<int>>&arr,int &row,int &col,int i,int j,vector<vector<bool>>&isvisited,string str,vector<string>&path)
    {
        // base condition
        if(i==row-1 && j==col-1)
        {
            path.push_back(str);
            return;
        }
        // down i+1 j
        if(isSafe(arr,row,col,i+1,j,isvisited))
        {
            isvisited[i+1][j]=true;
            helper(arr,row,col,i+1,j,isvisited,str+'D',path);
            isvisited[i+1][j]=false;
        }
        
        // right i j+1
         if(isSafe(arr,row,col,i,j+1,isvisited))
        {
            isvisited[i][j+1]=true;
            helper(arr,row,col,i,j+1,isvisited,str+'R',path);
            isvisited[i][j+1]=false;
        }
        
        // left i j-1
         if(isSafe(arr,row,col,i,j-1,isvisited))
        {
            isvisited[i][j-1]=true;
            helper(arr,row,col,i,j-1,isvisited,str+'L',path);
            isvisited[i][j-1]=false;
        }
        
        // up i-1 j
         if(isSafe(arr,row,col,i-1,j,isvisited))
        {
            isvisited[i-1][j]=true;
            helper(arr,row,col,i-1,j,isvisited,str+'U',path);
            isvisited[i-1][j]=false;
        }
        
    }
    vector<string> findPath(vector<vector<int>> &mat) {
       vector<string>path;
       string str="";
       int row=mat.size();
       int col=mat[0].size();
       vector<vector<bool>>isvisited(row,vector<bool>(col,false));
       if(mat[0][0]==0)
       return path;
       isvisited[0][0]=true;
       helper(mat,row,col,0,0, isvisited,str,path);
       return path;
    }

int main()
{
    vector<vector<int>>mat={{1,0,0},{1,1,0},{1,1,1}};
    vector<string>path=findPath(mat);

    for(int i=0;i<path.size();i++)
    {
        cout<<path[i]<<endl;
    }
    return 0;
}