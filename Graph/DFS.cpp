vector<vector<int>> adj; // graph represented as an adjacency list
int n; // number of vertices

vector<bool> visited;

void dfs(int v) {
    visited[v] = true;
    for (int child;child<adj[v].size(); ++child) {
        if (!visited[child])
            dfs(child);
    }
}
