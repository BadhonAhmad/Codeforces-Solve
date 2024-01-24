#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod     100007

void solve2(){
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n>>m;
    vector<bool> vis(n + 1, true);
    for (i = 0; i < m; i++)
    {
        cin >> a >> b;
        vis[b] = false;
    }
    for (i = 1; i <= n; i++){
        if(vis[i])
        {  ct++;
            sm = i;
        }
    }
    if(ct == 1){
        cout << sm << e;
    }
    else
        cout << -1 << e;
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;
    t = 1;
    //cin >> t;
    while (t--) solve2();
}