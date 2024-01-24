#include<bits/stdc++.h>
using namespace std;
//1+2+3+.......+n-1|+n
//trust this function that it will give us sum of n-1 then
//add n to left part and return it.

int sum_n(int n){

	int sum;

	if(n == 0){
		return 0;
	}
	int left_part = sum_n(n - 1);
	return left_part+n;
	
}


int main()
{
	cout<<sum_n(100)<<"\n";
}