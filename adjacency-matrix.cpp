#include<bits/stdc++.h>
using namespace std;

int main() {
    
    // V = no. of vertex, E = no. of edges
    int V, E;
    cin >> V >> E;
    int adj[V][V] = {0};

    while(E--) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = adj[v][u] = 1;
    }
    
    return 0;
}