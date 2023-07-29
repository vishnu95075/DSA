#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
bool vist[N];


void dfs(int vertex) {
    /**Take action on vertex after entering
     * the vertex
     **/

    vist[vertex] = true;
    for (int child : g[vertex]) {
        if (vist[child]) continue;
        /**Take action on child before
         * entering the child node
         **/

        dfs(child);
        /**Take action on child
         * after exiting node
         **/
    }

    /**Take action on vertex before
     * exiting the vertex
     **/
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
        dfs(i);
        cnt++;
    }

    cout<<cnt<<endl;
}