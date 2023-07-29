#include <iostream>
using namespace std;

template <typename T>
T max(T &a, T &b)
{
    return a > b ? a : b;
}

int main()
{
    // This will call max<int> by implicit argument deduction.
    cout << max(3, 7) << '\n';

    // This will call max<double> by implicit argument deduction.
    cout << max(3.0, 7.0) << '\n';

    // We need to explicitly specify the type of the arguments;
    // although std::type_identity could solve this problem...
    cout << max<float>(3, 7.5) << '\n';
}