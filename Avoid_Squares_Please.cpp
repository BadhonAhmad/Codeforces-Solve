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
        cin >> n;
        if(n%2 == 0){
        for ( i = n; i  > 0; i-=2)
        {
            cout << i << " ";
        }
        for ( i = n-1; i > 0; i-=2)
        {
            cout << i << " ";
        }
        }
        else{
            for ( i = n; i  > 0; i-=2)
        {
            cout << i << " ";
        }
        for ( i = 2; i < n; i+=2)
        {
            cout << i << " ";
        }
        }
        cout <<e;
    }
    return 0;
}

