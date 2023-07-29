#include <iostream>
using namespace std;

template <typename T>
T max1(T a, T b) {
    return a > b ? a : b;
}
template <typename P>
P maltiple(P a, P b) {
    return a * b;
}

int main() {

    cout<<"maltiplae is "<<maltiple(3,2)<<endl;
    cout<<"amximum is : "<<max1(2,5)<<endl;

}