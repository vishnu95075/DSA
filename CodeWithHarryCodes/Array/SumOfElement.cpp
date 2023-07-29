#include<iostream>
using namespace std;

int sumOfArray(int arr[],int n){
    int sum = 0;
    for(int i=0;  i<n; i++){
            sum+=arr[i];
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

    cout<<"Sum Of Array is : "<<sumOfArray(arr,n)<<endl;
    return 0;
}