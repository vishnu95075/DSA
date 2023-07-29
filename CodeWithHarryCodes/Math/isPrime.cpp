#include<iostream>
using namespace std;
int isPrime(int n){
    if (n == 1){
        return 0;
    }
    for (int i = 2; i * i < n; i++){
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"Inter The Number To Chack Number is Prime Or Not : ";
    cin>>n;
    isPrime(n)? cout<<"Number is Prime " : cout<<"Number is not Prime "<<endl;
    return 0;
}