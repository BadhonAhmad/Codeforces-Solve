#include <bits/stdc++.h>
using namespace std;

#define vll     vector<int>
#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod  1000000007

void solve()
{
    int i,j,k,a,b,c,sm=1,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin >> n;
    vector<int> va(n),vb(n);
    for(i = 0; i < n; i++){
        cin>>va[i]; 
    }
    for(i = 0; i < n; i++){
        cin>>vb[i]; 
    }
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end(), greater<>());
    for(i = 0; i < n; i++){
        int geti = va.size() - (upper_bound(va.begin(), va.end(), vb[i]) - va.begin());
        sm = sm * (geti - i);
        sm %= mod;
    }
    cout << sm << e;

    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}