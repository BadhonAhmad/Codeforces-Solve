#include <bits/stdc++.h>
using namespace std;

#define int long long

#define mod 100007


int n;
vector<int> g[mod];

vector<bool> visitd(mod);

void dfs(int v){
    visitd[v] = true;
    for (auto child:g[v]){
        if(!visitd[child]){
            dfs(child);
        }
    }
}

void solve()
{
    int i;
    cin >> n;
    int ct = 0;
    for (i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        g[i].push_back(x);
        g[x].push_back(i);
    }
    for (i = 1; i <= n; i++){
        if(!visitd[i]){
            dfs(i);
            ct++;
        }
    }
    cout << ct ;
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}