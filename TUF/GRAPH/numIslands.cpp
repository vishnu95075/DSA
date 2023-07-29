//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
   private:
    void dfs(int row, int col, vector<vector<char>> grid, vector<vector<bool>>& isVisited) {
        int n = grid.size();
        int m = grid[0].size();
        isVisited[row][col] = true;
        queue<pair<int, int>> q;
        q.push({row, col});

        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for (int delrow = -1; delrow <= 1; delrow++) {
                for (int delcol = -1; delcol <= 1; delcol++) {
                    int nrow = row + delrow;
                    int ncol = col + delcol;
                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                        !isVisited[nrow][ncol] && grid[nrow][ncol] == '1') {
                        isVisited[nrow][ncol] = true;
                        q.push({nrow, ncol});
                    }
                }
            }
        }
    }


   public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
    
        vector<vector<bool>> isVisited(n, vector<bool>(m, false));
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!isVisited[i][j] && grid[i][j] == '1') {
                    ans++;
                    dfs(i, j, grid, isVisited);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends