#include <bits/stdc++.h>

using namespace std;

void print(int ind,vector<int> &ds, int arr[],int  n){
	if(ind==n) {
		for(int it:ds){
			cout<<it<<" ";
		}

		cout<<endl;
		return ;
	}
	ds.push_back(arr[ind]);
	print(ind+1,ds,arr,n);
	ds.pop_back();
	print(ind+1,ds,arr,n);
	sort(arr, arr+n);
	int num = 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == num) num++;
	}
	return num;
}


int main(){
	

	cout<<"Hello World"<<endl;



	return 0;
}