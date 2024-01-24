#include<bits/stdc++.h>
using namespace std;

void pattern_print(int n){
	if(n==0){
		return ;
	}
	for(int i=1; i<=n; i++){
		cout<<i<<" ";
	}cout<<endl;
	pattern_print(n-1);//trusting u
}

const int N = 0;
int main()
{
	pattern_print(7);
}