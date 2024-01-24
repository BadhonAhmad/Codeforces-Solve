#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod     1000000007

void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n;
    vector<int> v[n+1];
    for(i = 0; i < n; i++){
        cin >> a >> b;
        v[a].push_back(b);
    }
    for (i = 1; i <= n; i++){
        sort(v[i].rbegin(),v[i].rend());
        for (j = 0; j < min((long long)v[i].size(), i); j++){
            sm += v[i][j];
        }
    }
    cout << sm << e;
    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int _; cin >> _;
    while (_--) solve(); return 0;
}