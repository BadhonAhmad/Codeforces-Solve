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
    vector<int> v(n),vv(n);
    for(i = 0; i < n; i++){
        cin>>v[i];
        vv[i] = v[i];
    }
    sort(all(v));
    if(vv == v)
        cout << 0 << e;
    else{
        for (i = n - 1; i >= 0; i--){
            if(v[i] == vv[i] && f==0){
                continue;
            }
            else{
                f = 1;
                mx = max(v[i], mx);
            }
        }
        cout << mx << e;
    }
    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--) solve();
}