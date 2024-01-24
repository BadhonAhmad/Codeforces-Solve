#include<bits/stdc++.h>
using namespace std;

//trust the function ->Recursive leap of faith
//very important = base case

void say_hello(int n){
	if(n==0)///stopping case or BAse case or initial case 
		return;///stop

	say_hello(n-1);//it will print first n-1 times

	cout<<"hello"<<n<<"\n";

}


int main()
{

	
	int n;
	//cin>>n;
	say_hello(1);

}