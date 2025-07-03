#include <iostream>
#include <list>
#include <vector>
using namespace std;

vector<list<pair<int, int>>> graph;
int v;

void add_edge(int src, int des, int wt, bool bidir = true) {
    cout << "Adding edge: " << src << " -> " << des << " (Weight: " << wt << ")\n";
    graph[src].push_back({des, wt});
    if (bidir) {
        graph[des].push_back({src, wt});
    }
}

void print_graph() {    
    for (int i = 0; i < graph.size(); i++) {
        cout << i << " -> ";
        for (auto it : graph[i]) {
            cout << "(" << it.first << "," << it.second << ") ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Enter number of vertices: ";
    cin >> v;

    if (cin.fail() || v <= 0) {
        cout << "Invalid input for vertices!" << endl;
        return 1;
    }

    graph.resize(v);

    cout << "Enter number of edges: ";
    int e;
    cin >> e;

    if (cin.fail() || e < 0) {
        cout << "Invalid input for edges!" << endl;
        return 1;
    }

    cout << "Enter edges (source destination weight):\n";
    while (e--) {
        int s, d, wt;
        cin >> s >> d >> wt;

        if (s < 0 || s >= v || d < 0 || d >= v || wt < 0) {
            cout << "Invalid edge input! Skipping...\n";
            continue;
        }

        add_edge(s, d, wt);
    }

    cout << "\nGraph Representation:\n";
    print_graph();

    return 0;
}
