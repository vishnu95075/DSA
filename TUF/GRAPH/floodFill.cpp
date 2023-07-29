#include <bits/stdc++.h>
using namespace std;

class Solution {
   private:
    void dfs(int store, int sr, int sc, int newColor, vector<vector<int>>& image, int n, int m) {
        if (sr < 0 || sc < 0 || sr >= n || sc >= m || image[sr][sc] != store)
            return;
        image[sr][sc] = newColor;
        dfs(store, sr - 1, sc, newColor, image, n, m);
        dfs(store, sr, sc + 1, newColor, image, n, m);
        dfs(store, sr + 1, sc, newColor, image, n, m);
        dfs(store, sr, sc - 1, newColor, image, n, m);
    }

   public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here
        int n = image.size();
        int m = image[0].size();
        int store = image[sr][sc];
        if (store == newColor)
            return image;
        dfs(store, sr, sc, newColor, image, n, m);
        return image;
    }
};

int main() {
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> image(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> image[i][j];
        }
        int sr, sc, newColor;
        cin >> sr >> sc >> newColor;
        Solution obj;
        vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
        for (auto i : ans) {
            for (auto j : i)
                cout << j << " ";
            cout << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends