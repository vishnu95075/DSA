#include <stdio.h>

/*
// This is C++ BuiltinFuntion;
int gcd (long a, long b) {
   return __gcd(a,b);
}

*/
int gcd1(long a, long b) {
    return b ? gcd1(b, a % b) : a;
}

int gcd2(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd2(b, a % b);
}

int gcd3(int a, int b) {
    while (b) {
        a %= b;
        // swap(a, b);
        int t = a;
        a = b;
        b = t;
    }
    return a;
}

// Fastest algorithm
int gcd4(int a, int b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b) {
            // swap(a, b);
            int t = a;
            a = b;
            b = t;
        }

        b -= a;
    } while (b);
    return a << shift;
}

int main() {
    int a, b;
    printf("Inter The Value Of a , b : ");
    scanf("%d %d", &a, &b);
    printf("GCD Of %d Of %d iS = %lld", a, b, gcd4(a, b));
    return 0;
}