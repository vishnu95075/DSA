//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution {
   private:
    void dfs(vector<int> adjList[], bool isVisited[], int node) {
        isVisited[node] = true;
        for (auto x : adjList[node]) {
            if (!isVisited[x]) {
                dfs(adjList, isVisited, x);
            }
        }
    }

   public:
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<int> adjList[V];

        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (adj[i][j] == 1 && i != j) {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        bool isVisited[V] = {0};

        int ans = 0;
        for (int i = 0; i < V; i++) {
            if (!isVisited[i]) {
                ans++;
                dfs(adjList, isVisited, i);
            }
        }
        return ans;
    }
};

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