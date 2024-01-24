#include<bits/stdc++.h>
#define fastio            ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll                long long
#define ull               unsigned long long
#define ld                long double
#define vll               vector<ll>
#define all(a)            a.begin(),a.end()
#define pb(a)             push_back(a)
#define e                 endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;

int main()
{
    fastio;
    ll cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n;
    cin>>t;
    while(t--){
        cin >> a >> b;
        x = a * 2;
        y = b * 5;
        if(x>y){
            cout << "Chocolate" << e;
        }
        else if( x==y){
            cout << "Either" << e;
        }
        else
            cout << "Candy" << endl;
    }
    return 0;
}

