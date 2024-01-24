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
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n;

    vector<int> v(n),vk;
    for(i = 0; i < n-1; i++){
        cin>>v[i];
    }
    sm = n * (n + 1) / 2;
    if(sm<v[n-2]){
        no;
        return;
    }

    if(v[n-2] != sm){
        v[n - 1] = sm;
        for (i = n - 2; i >= 0; i--){
            vk.pb(v[i + 1] - v[i]);
        }
        vk.pb(v[0]);
        bool ok = true;
        vector<bool> visited(n + 1, false);
        for(i = 0; i < n; i++){
            if(vk[i]>n || visited[vk[i]]){
                ok = false;
                break;
            }
            visited[vk[i]] = true;
        }
        if(ok){
            yes;
            return;
        }else{
            no;
            return;
        }
    }
    vector<bool> visited(n + 1, false);
    vector<int> sums;
    for(i = 0; i < n-1; i++){
        if(i == 0){
            sums.pb(v[i]);
            if(v[i]<=n){
                visited[v[i]] = true;
            }
        }
        else{
            sums.pb(v[i] - v[i - 1]);
            if(v[i]-v[i-1]<=n){
                visited[v[i] - v[i - 1]] = true;
            }
        }
    }
    vll missing;
    for(i = 1; i <= n; i++){
        if(!visited[i]){
            missing.pb(i);
        }
    }
    if(missing.size() != 2){
        no;
        return;
    }
    for(auto it:sums){
         
    }
    no;

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