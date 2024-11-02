#include <iostream>
#include <list>
#include <vector>
#include <set>
using namespace std;

vector<list<int>> graph;
int v;
set<int> visited;
vector<int> path;
vector<vector<int>> result;

void add_edge(int src, int des, bool bidir = true)
{
    graph[src].push_back(des);
    if (bidir)
    {
        graph[des].push_back(src);
    }
}

void print_graph()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << " -> ";
        for (auto it : graph[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
}

void ispath(int src, int des, vector<int> &path, vector<vector<int>> &result)
{
    // Add current node to the path
    path.push_back(src);

    // Base case: when source equals destination
    if (src == des)
    {
        result.push_back(path);  // Store the current path
        path.pop_back();         // Remove the node after storing the path
        return;
    }

    visited.insert(src);  // Mark current node as visited

    // Explore adjacent nodes
    for (auto it : graph[src])
    {
        if (visited.find(it) == visited.end())  // Only visit unvisited nodes
        {
            ispath(it, des, path, result);
        }
    }
    // Remove current node from the path and visited set before backtracking
    path.pop_back();
    visited.erase(src);
}

int main()
{
    cout << "Enter number of vertices: ";
    cin >> v;
    graph.resize(v);

    cout << "Enter number of edges: ";
    int e;
    cin >> e;

    // Adding edges
    while (e--)
    {
        int s, d;
        cin >> s >> d;
        add_edge(s, d, true);  // Assuming bidirectional edges
    }

    print_graph();  // Print adjacency list

    int src, des;
    cout << "Enter source and destination: ";
    cin >> src >> des;

    ispath(src, des, path, result);  // Find all paths from src to des

    // Output all found paths
    cout << "All paths from " << src << " to " << des << ":\n";
    for (auto &it : result)
    {
        for (auto &i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
