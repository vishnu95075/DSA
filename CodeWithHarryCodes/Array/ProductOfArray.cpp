#include<iostream>
using namespace std;

int productOfArray(int arr[],int n){
    long long sum = 1;
    for(int i=0;  i<n; i++){
            sum*=arr[i];
    }
    return sum;

}

int main(){
    int n;
    cout<<"Inter the Size Of Array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Product Of Array is : "<<productOfArray(arr,n)<<endl;
    return 0;
}