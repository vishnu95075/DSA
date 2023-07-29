#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
bool vist[N];

bool dfs(int vertex, int par) {
    bool isCycle1 = false;

    vist[vertex] = true;
    // current_cc.push_back(vertex);
    for (int child : g[vertex]) {
        if (vist[child] && child == par) continue;
        if (vist[child]) return true;

        isCycle1 |= dfs(child, vertex);
    }

    return isCycle1;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int cnt = 0;
    bool isCycle1 = false;
    for (int i = 1; i <= n; i++) {
        if (vist[i]) continue;
        if (dfs(i, 0)) {
            isCycle1 = true;
            break;
        }
    }

    cout << isCycle1 << endl;
}