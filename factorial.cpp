#include<bits/stdc++.h>
using namespace std;
int factorial (int n){
	if(n==0){
		return 1;
	}
	return factorial (n-1) * n;
}

const int N = 0;
int main()
{
	int n;
	cin>>n;
	cout<<factorial(n)<<endl;
}