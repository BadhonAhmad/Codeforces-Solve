#include<bits/stdc++.h>
using namespace std;

void pattern_print(int n){
	if(n==0){
		return;
	}
				
	pattern_print(n-1);//n-1 rows printed cz of trust

	for(int i=1; i<=n; i++){
		cout<<i<<" ";
	}cout<<endl;

}

const int N = 0;
int main()
{
	pattern_print(1);

}