// Climbing Way ->>  code Studio


#include <iostream>

using namespace std;

class Solution{
public:
	int climb1(int n){
		if(n<=2) return n;
		// int climb_for_1 = climb1(n-1);
		// int climb_for_2 = climb1(n-2);
		// return climb_for_1+climb_for_2;

		return climb1(n-1)+climb1(n-2);

	}

};



int main(){

	int n;
	cin>>n;

	Solution a;
	cout<<a.climb1(n)<<endl;


	return 0;
}




