
#include <iostream>
#include<map>
using namespace std;

int main() {
    map<int, int> mp;

    mp.insert({2, 30});
    mp.insert({1, 40});
    mp.insert({3, 60});
    mp.insert({5, 50});
    mp.insert({ 82, 30 });
    mp.insert({ 51, 40 });
    mp.insert({3, 90});
 
    auto it = mp.find(2);
    mp.insert(it, { 9, 899 });

    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first << '\t' << itr->second << '\n';
    }
    cout<<"\n Count is --> "<<endl;

    cout<<mp.count(3)<<endl;

    cout<<"\n Present at is --> "<<endl;
    
    cout<<mp.at(3)<<endl;
    return 0;
}
