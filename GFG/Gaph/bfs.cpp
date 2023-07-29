#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> v;
        queue<int> q;
        q.push(0);
        vector<int> vis(V, 0);
        vis[0] = 1;
        while (!q.empty()) {
            int top = q.front();
            q.pop();
            v.push_back(top);
            for (auto x : adj[top]) {
                if (!vis[x]) {
                    vis[x] = 1;
                    q.push(x);
                }
            }
        }
        return v;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
