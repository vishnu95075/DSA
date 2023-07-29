/********************************************
**
**   Author  : Vishnu Kumar Prajapati
**   Country : India
**
/*******************************************/

// #include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

void solve() {
    string s ;//= "acb";
    string t ;//= "ahbgdc";
    cin>>s;
    cin>>t;
    if (s.size() == 0){
      cout<<"YES"<<endl;
      return ;  
    } 
    int i=0,j,t1 = 0,p=0;
    bool f=false;

    for (i ; i < t.size(); i++) {
        if(s.size()==j-1) cout<<"NO"<<endl;
        for (j = p; j < s.size(); j++) {
            if (t[i] == s[j]) {
                t1++;
                // deb(t1);
                p=j;

                // cout<<endl;
               
            }
            if (s.size() == t1) {
                cout<<"YES"<<endl;
                f=true;
                return ;
            }
            // deb2(i,j);
            // deb2(t[i],s[j]);
        }
    }

    cout<<"NO"<<endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t(1);
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}