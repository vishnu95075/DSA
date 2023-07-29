#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;

int graph[N][N];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {   // O(n^2) - Space Complexity
        int v1, v2;                 //  N = 10^5
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
}
