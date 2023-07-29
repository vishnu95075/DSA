#include <iostream>
using namespace std;

int main() {
    int a[] = {3, 4, 2, 5, 1, 9,52};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    int mx = 0;

    for (int i = 0; i < n; i++) {
        if (mx < a[i]) mx = a[i];
    }
    int smx = 0;
    for (int i = 0; i < n; i++) {
        if (mx > a[i] && smx < a[i]) {
            smx = a[i];
        }
    }

    cout<<"First Largest Element is :"<<mx<<"   \n"<<"second Lagest element is :"<<smx<<endl;

    return 0;
}