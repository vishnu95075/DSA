//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void dfs(int node,vector<int> &ans,int visited[],vector<int> adj[]){
        visited[node]=1;
        ans.push_back(node);
        for(auto it:adj[node]){
            if(!visited[it]){
                dfs(it,ans,visited,adj);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
      
      int visited[V]={0};
      vector<int> ans;
      dfs(0,ans,visited,adj);
      return ans;
       
    }
};

//{ Driver Code Starts.
int main() {
    int tc=1;
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
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends