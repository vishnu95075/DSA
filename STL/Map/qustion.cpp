//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
   public:
    string secFrequent(string arr[], int n) {
        map<string, int> mp;

        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        int mx = 0;
        string ans;

        for (int i = 0; i < n; i++) {
            if (mx < mp[arr[i]]) {
                mx = mp[arr[i]];
            }
        }
        int smx = 0;
        for (int i = 0; i < n; i++) {
            if (mx > mp[arr[i]] && smx<mp[arr[i]]) {
                smx = mp[arr[i]];
                // ans = arr[i];
                cout<<ans<<endl;
            }
        }
        return ans;
    }
};

int main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent(arr, n) << endl;
    }
}
