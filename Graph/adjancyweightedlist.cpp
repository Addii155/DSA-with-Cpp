#include<iostream>
#include<list>
#include<vector>
using namespace std;

vector<list<pair<int,int>> >graph;
int v;

void add_edge(int src, int des, int wt, bool bidir=true){
    graph[src].push_back({des,wt});
    if(bidir)
    {
        graph[des].push_back({src,wt});
    }
}
void print_graph()
{
    for(int i=0;i<graph.size();i++)
    {
        cout<<i<<"->";
        for(auto it:graph[i])
        {
            cout<<"("<<it.first<<","<<it.second<<")"<<",";
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"enter vertices-> ";
    cin>>v;
    graph.resize(v,list<pair<int,int>>());
    cout<<"enter no of edge-> ";
    int e;
    cin>>e;
    while(e--)
    {
        int s,d,wt;
        cin>>s>>d>>wt;
        add_edge(s,d,wt);
    }
    print_graph();
}