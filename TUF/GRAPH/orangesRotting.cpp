//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<pair<int,int>,int>> q;
        int vis[n][m];
        
        int cntF=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else{
                    vis[i][j]=0;
                }
                
                if(grid[i][j]==1) cntF++;
            }
        }
        
        
        int tm=0;
        int drow[] = {-1,0,+1,0};
        int dcol[] = {0,+1,0,-1};
        
        int checkCnt=0;
        
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            
            int t=q.front().second;
            q.pop();
            tm=max(tm,t);
            
            for(int i=0; i<4; i++){
                int row=r+drow[i];
                int col=c+dcol[i];
                
                if(row<n && row>=0 && col<m && col >=0 && grid[row][col]==1 && vis[row][col]!=2){
                    q.push({{row,col},t+1});
                    vis[row][col]=2;
                    checkCnt++;
                }
            }
        }
        
        if(checkCnt!=cntF) return -1;
        
        return tm;
       
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc=1;
	// cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends