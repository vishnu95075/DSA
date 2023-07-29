// Frog Jump Problem

#include <iostream>
#include<cmath>

using namespace std;
class Solution {
   public:
    int frogJumpMinimumEnegryFind(int a[],int n) {
		if(n==0) return 0;
		int left = frogJumpMinimumEnegryFind(a,n-1) + abs(a[n]-a[n-1]);
		if(n>1)
		int right = frogJumpMinimumEnegryFind(a,n-2)+abs(a[n]+a[n-2]);

		return (min(left,right));
    }
};

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    Solution s1;
    cout << s1.frogJumpMinimumEnegryFind(a,n) << endl;

    return 0;
}