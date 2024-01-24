#include <bits/stdc++.h>
using namespace std;

#define vll     vector<int>
#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"


void solve()
{
    int i,j,k,a,d,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin >> n >> d;
    vector<bool> vis(d, true);
    for(i = 0; i < n; i++){
        cin >> s;
        for(j = 0; j < d; j++){
            if(s[j] == 'x')
                vis[j] = false;
        }
    }
    for(i = 0; i < d; i++){
        if(vis[i]){
            ct++;
        }
        else {
            mx = max(ct, mx);
            ct = 0;
            f = 1;
        }
    }

    cout << max(mx,ct);

    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
        solve();
    return 0;
}