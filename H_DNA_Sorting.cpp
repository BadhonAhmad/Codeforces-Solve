// C++ program to demonstrate getline() function 

#include<bits/stdc++.h>

using namespace std; 

int main() 
{ 
	string str; 

	getline(cin, str); 

    int n = str.size();
    int fr = 0, sm = 0;
    for(int i = 0; i < n-1; i++){
        string sk ;
        sk += str[i];
        sk += str[i+1];
        if(sk == ":)"){
            sm ++;
        }
        if(sk == ":(") fr++;
    }
    if(sm && fr){
        cout << "double agent";
    }
    else if(!sm && !fr){
        cout << "machine";
    }
    else if(sm){
        cout << "alive";
    }
    else cout << "undead";

	return 0; 
} 
