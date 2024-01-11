#include<iostream>

using namespace std;

int climbingStarts(int n,int dp[]){
    if(n<=2) return n;

    if(dp[n]!=0) return dp[n];
    return dp[n]=climbingStarts(n-1,dp)+climbingStarts(n-2,dp);

}

int main(){
    int n;
    cin>>n;
    int dp[n+1]={0};
    cout<<climbingStarts(n,dp)<<endl;
    return 0;
}