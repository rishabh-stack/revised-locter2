// Detect cycle in an undirected graph

bool dfs(int u, vector<int>adj[], vector<bool>&visited, int parent){
        visited[u] = true;
        for(auto v: adj[u]){
            if(visited[v] == false){
                if(dfs(v,adj,visited,u)){
                    return true;
                }
            }
            else if(v != parent) return true;
        }
        return false;
    }
    
  bool isCycle(int V, vector<int> adj[]) {
      // Code here
      vector<bool>visited(V+1,false);

      for(int i=0;i<V;i++){
          if(visited[i] == false){
              if(dfs(i,adj,visited,-1)) return true;
          }
      }

      return false;
  }
