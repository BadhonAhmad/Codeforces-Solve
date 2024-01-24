#include<bits/stdc++.h>
#define fastio            ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll                long long
#define ull               unsigned long long
#define ld                long double
#define vll               vector<ll>
#define all(a)            a.begin(),a.end()
#define pb(a)             push_back(a)
#define e                 endl
#define yes               cout<<"YES"<<endl
#define cy                cout << "Case " << i << ": Yes" << endl
#define cn                cout << "Case " << i << ": No" << endl
#define no                cout<<"NO"<<endl
using namespace std;

void solve(){
    ll cnt=0,f=0,sum=0,ans=0,t,x,y,z,i,j,k,a,b,c,n,m;
    string s1,s2;
    vll v,vv;
    cin >> x >> y;  cin >> a >> b;
    if(x == 0 && y == 0){
        cout << 0 << e;
        return;
    }
    if(x>y)
        swap(x, y);
    ans = x * a + y * a;
    z = y - x;
    sum = z * a + b * x;
    cout << min(ans, sum) << e;
}

int main()
{
    fastio;
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){ 
    solve();
    }
    return 0;
}