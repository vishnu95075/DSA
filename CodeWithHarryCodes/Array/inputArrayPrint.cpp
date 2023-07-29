#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Inter the Size Of Array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Array Is : "<<endl;

    for(int i=0;  i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}