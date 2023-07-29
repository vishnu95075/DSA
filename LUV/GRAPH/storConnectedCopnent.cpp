#include<iostream>
#include<vector>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
bool vist[N];

vector<vector<int> > cc;

vector<int> current_cc;

void dfs(int vertex) {
    vist[vertex] = true;
    current_cc.push_back(vertex);
    for (int child : g[vertex]) {
        if (vist[child]) continue;

        dfs(child);
    }
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
    for (int i = 1; i <= n; i++) {
        if (vist[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        cnt++;
    }

    // cout << cnt << endl;

    for (auto c_cc : cc) {
        for (int vertex : c_cc) {
            cout << vertex << " ";
        }
        cout << endl;
    }
}