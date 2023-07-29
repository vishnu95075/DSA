#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    vector<pair<int,int>> adj[m+1];

    for (int i = 0; i < m; i++) {
        int u, v, t;
        cin >> u >> v >> t;
        adj[u].push_back({v,t});
        adj[v].push_back({u,t});
    }
}
