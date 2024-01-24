#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int s;
    cin>>a;
    cin >>s;
    int ar[a];
    for(int i=0; i<a; i++){
        cin>>ar[i];
    }
    for(int i=0; i<a; i++){
        if(s==ar[i]){
           cout <<i+1<<endl;
            break;
        }

    }

}
