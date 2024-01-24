#include<bits/stdc++.h>
using namespace std;

int sum_digits(int n){
	if(n==0){//base case 
		return 0;
	}
	//trusting that this will return of n/10 and then i have to add 
	//just the last digit n%10
	//sum_digits(230348)||+2
	int last_digit=n%10;
	int remaining=n/10;
	
	cout<<remaining<<" "<<last_digit<<endl;
	
	return sum_digits(remaining) + last_digit;
}

const int N = 0;
int main()
{
	cout<<sum_digits(12134)<<endl;
}