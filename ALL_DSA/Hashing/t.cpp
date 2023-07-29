#include <iostream>
using namespace std;

bool has[7899][2];

bool find(int x) {
    if (x > 0)
        if (has[x][0] == 1)
            return true;
        else
            return false;
    x = abs(x);
    if (has[x][1] == 1)
        return true;
    else
        return false;
}

void insert(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            has[a[i]][0] = 1;
        } else {
            has[abs(a[i])][1] = 1;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    insert(a, n);

    int x;
    cin>>x;

    if (find(x)) {
        cout << "YES" << endl;
    } else {
        cout<<"NO"<<endl;
    }
}