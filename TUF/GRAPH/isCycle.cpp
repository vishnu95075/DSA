#include <bits/stdc++.h>
using namespace std;

class Solution {
   private:
    bool detect(int src, vector<int> adj[], int vis[]) {
        queue<pair<int, int>> q;
        q.push({src, -1});
        vis[src] = true;

        while (!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for (auto nbr : adj[node]) {
                if (!vis[nbr]) {
                    q.push({nbr, node});
                    vis[nbr] = true;
                } else if (vis[nbr] && nbr != parent) {
                    return true;  // Cycle detected
                }
            }
        }

        return false;
    }

   public:
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V] = {0};
        for (int i = 0; i < V; i++) {
            if (!vis[i])
                if (detect(i, adj, vis))
                    return true;
        }

        return false;
    }
};

int main() {
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}