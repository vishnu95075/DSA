// C++ program for illustration
// of map::find() function
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialize container
    map<int, int> m;

    // Insert elements in random order
    m.insert({2, 30});
    m.insert({1, 40});
    m.insert({3, 20});
    m.insert({4, 50});

    int s1 = 2;  // element1 to find (exist in the map)
    int s2 = 5;  // element2 to find (does not exist in the map)

    cout << "Element " << s1;
    if (m.find(s1) != m.end())
        cout << " : found : Value : " << m[s1] << endl;
    else
        cout << " : Not found" << endl;

    cout << "Element " << s2;

    if (m.find(s2) != m.end()) 
        cout << " : found : Value : " << m[s2];
     else
        cout << " : Not found" << endl;

    if (m.find(9) != m.end()) 
        cout << " : found : Value : " << m[s2];
     else
        cout << " : Not found" << endl;

    

    return 0;
}
