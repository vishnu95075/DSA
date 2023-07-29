#include <iostream>
#include <vector>

const int N = 1e5 + 10;

using namespace std;

vector<int> g[N];

int depth[N], height[N];

void dfs(int vertex, int par = 0) {
    for (int child : g[vertex]) {
        if (child == par) continue;
        depth[child] = depth[vertex] + 1;

        dfs(child, vertex);

        height[vertex] = max(height[vertex] , height[child]+1);
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; ++i) {
        int x, y;
        cin >> x >> y;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1);

    for (int i = 1; i <= n; i++) {
        cout << "Depth : " << depth[i] << "    Height : " << height[i] << endl;
    }

    return 0;
}