#include"bits/stdc++.h"
using namespace std;
int fibo(int n){
	if(n==1){
		return 1;//1st element of fibobacci series is 1 ,2nd is 1,3rd is 2
	}
	if(n == 2){
		return 1;
	}
 return fibo(n-1)+fibo(n-2);

}
//time complexity
//1 2 3 4 6 7 8 9 10
//0 1 1 2 3 5 8 13
//f8=f7+f6
//f9=f8+f7
//f(n)=f(n-1)+f(n-2)

const int N = 0;
int main()
{
	
	cout<<fibo(4)<<endl;
}