#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"Yes\n"
#define no      cout<<"No\n"
#define mod     1000000007

void solve()
{
    int n, m,i,j;
    cin >> n >> m;
    int p[n], c[n];
    vector<int> f[n];
    for(i = 0; i < n; i++){
        cin >> p[i] >> c[i];
        for(j = 0; j < c[i]; j++){
            int a;
            cin >> a;
            f[i].push_back(a);
        }
        sort(f[i].begin(), f[i].end());
    }
    bool ok = false;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(p[i]<p[j]) continue;
            if(!includes(f[j].begin(),f[j].end(),f[i].begin(),f[i].end())){ 
            continue;
            }
            if(p[i]>p[j])
            ok = true;
            if(f[j].size() > f[i].size())
            ok = true;
        }
    }
    if(ok)
        yes;    
    else
        no;
    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; //cin >> t;
    while (t--) solve();
}