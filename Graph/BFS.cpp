vector<vector<int>> adj;  // adjacency list 
int n; // number of nodes
int s; // source vertex

queue<int> q;
vector<bool> vis(n);
vector<int> d(n), p(n);

q.push(s);
vis[s] = true;
p[s] = -1;
while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int child = 0;child<adj[v].size();++i) {
        if (!vis[child]) {
            vis[child] = true;
            q.push(child);
            d[child] = d[v] + 1;
            p[child] = v;
        }
    }
}
