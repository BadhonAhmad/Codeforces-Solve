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
#define cy cout << "Case " << i << ": Yes" << endl
#define cn cout << "Case " << i << ": No" << endl
#define no cout<<"NO"<<endl
using namespace std;

int main()
{
    fastio;
    ll cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n,m;
    string s1,s2;
    vector<ll> v,vv;
    cin>>t;
    for(i=1; i<=t; i++){
        cin >> n;
        k = n / 2;
        if(n%2)
            k++;
        j = n;
        for (size_t x = 0; x < n/2; x++)
        {
            cout << k-- << " " << j-- << " ";
        }
        if(n%2){
            cout << 1 ;
        }
        cout << e;
    }
    return 0;
}

