#include <iostream>
#include <vector>

using namespace std;

int solveUtil(int n, vector<int> &height, vector<int> &dp, int k) {
    if (n == 0) return 0;

    if (dp[n] != -1) return dp[n];

    int minJump = INT_MAX;

    for (int j = 1; j <= k; j++) {
        if (n - j >= 0) {
            int currentMinJump = solveUtil(n - j, height, dp, k) +
                                 abs(height[n] - height[n - j]);
            minJump = min(minJump, currentMinJump);
        }
    }

    return dp[n]=minJump;
}

int solve(int n, vector<int> &height, int k) {
    vector<int> dp(
        n, -1);  // Initialize a memoization array to store calculated results
    return solveUtil(n - 1, height, dp,
                     k);  // Start the recursion from the last index
}

int main() {
    vector<int> height{30, 10, 60, 10, 60, 50};
    int n = height.size();
    int k = 2;
    vector<int> dp(n,
                   -1);  // Initialize a memoization array for the main function
    cout << solve(n, height, k)
         << endl;  // Print the result of the solve function
    return 0;
}