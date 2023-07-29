//fibonacciSeries

#include <iostream>
using namespace std;


class Solution {
	int tb[100000];
	int t;
public:
// Memorization 
	int fb1(int n){

		if(n==1) return 1;
		if(n==2) return 1;
		if(n==3) return 2;
		
		if(tb[n])
			return tb[n];
		tb[n]= fb1(n-1)+fb1(n-2);
		
		return tb[n];
	}


// Tabulation
	int fb2(int n){
		int tb[10000];
		tb[0]=0;
		tb[1]=1;
		tb[2]=1;
		tb[3]=2;

		for(int i=4; i<=n; i++){
			tb[i]=tb[i-1]+tb[i-2];
		}
		
		return tb[n];

	}


};


int main(){
	Solution a;

	int n;
	cin>>n;
	cout<<"Memorization Ans : "<<a.fb1(n)<<endl;
	cout<<"Tabulation Ans : "<<a.fb2(n)<<endl;

	return 0;
}


// 1 1 2 3 5  8 13  21
// 1 2 3 4 5  6  7  8