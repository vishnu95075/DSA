#include <iostream>
#include <vector>

using namespace std;

int solveUtil(int n, vector<int> &height, vector<int> &dp, int k) {
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        int minJump = INT_MAX;
        for (int j = 1; j <= k; j++) {
            if (i - j >= 0) {
                int currentMinJump = dp[i - j] + abs(height[i] - height[i - j]);
                minJump = min(currentMinJump, minJump);
            }
        }
        dp[i]=minJump;
    }
    return dp[n];
}

int solve(int n, vector<int> &height, int k) {
    vector<int> dp(n, -1);
    return solveUtil(n - 1, height, dp, k);
}

int main() {
    vector<int> height{30, 10, 60, 10, 60, 50};
    int n = height.size();
    int k = 2;
    cout << solve(n, height, k) << endl;
    return 0;
}