#include <bits/stdc++.h>
#include <vector>
using namespace std;

struct node {
    int u,v,wt;
    node(int _u, int _v, int _wt) {
        u = _u, v = _v, wt = _wt;
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<node> edges;
    
    for (int i = 0; i < m; ++i) {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back(node(u, v, wt));
    }

    int src;

    cin>>src;

    int const INF = 1e5;

    vector<int> dis(n,INF);

    for(int i=1; i<=n-1; i++){
        for(auto it: edges){
            if(dis[it.u] + it.wt < dis[it.v]){
                dis[it.v] = dis[it.u] + it.wt;
            }
        }
    }

    int fl = 0;

    for(auto it : edges){
        if(dis[it.u] + it.wt < dis[it.u]){
            cout<<"Negative Cycle Edges";
            fl = 1;
            break;
        }
    }

    for(auto x : edges){
        cout<<x.u<<" "<<x.v<<" "<<x.wt<<endl;
    }

    return 0;
}