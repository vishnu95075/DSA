//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    void dfs(vector<vector<int>> adj, vector<int> &ans, int visit[], int node) {
        visit[node] = 1;
        cout<<node<<endl;
        ans.push_back(node);
        for (auto x : adj[node]) {
            if (!visit[x]) {
                dfs(adj, ans, visit, node);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<int> ans;
        int visit[1000] = {0};
        dfs(adj, ans, visit, 0);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        int V, x;
        cin >> V;

        vector<vector<int>> adj;

        for (int i = 0; i < V; i++) {
            vector<int> temp;
            for (int j = 0; j < V; j++) {
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution ob;
        cout << ob.numProvinces(adj, V) << endl;
    }
    return 0;
}
// } Driver Code Ends