// Time Complexity - log(n)

#include<stdio.h>

long long binPow(int a,int b){

    long long res;
    if(b==0)
        return 1;
    res = binPow(a,b/2);

    if(b%2) return res*res*a;
    else return res*res;

}


long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}


int main(){
    int a,b;
    printf("Inter The Value Of a , b:");
    scanf("%d %d",&a,&b);
    printf("Power Of %d Of %d iS = %lld",a,b,binPow(a,b));
    return 0;
}