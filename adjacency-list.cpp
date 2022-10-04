#include<bits/stdc++.h>
using namespace std;

int main() {
    
    // V = no. of vertex, E = no. of edges
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];

    while(E--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    return 0;
}