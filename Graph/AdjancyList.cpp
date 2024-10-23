#include<iostream>
#include<list>
#include<vector>
using namespace std;

vector<list<int> >graph;
int v;

void add_edge(int src, int des, bool bidir=true){
    graph[src].push_back(des);
    if(bidir)
    {
        graph[des].push_back(src);
    }
}
void print_graph()
{
    for(int i=0;i<graph.size();i++)
    {
        cout<<i<<"->";
        for(auto it:graph[i])
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"enter vertices-> ";
    cin>>v;
    graph.resize(v,list<int>());
    cout<<"enter no of edge->";
    int e;
    cin>>e;
    while(e--)
    {
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    print_graph();
}