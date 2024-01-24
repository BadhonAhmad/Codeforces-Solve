/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int N = 1e4 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/
vector<int> g[N];
void solve()
{
    int i, j, k, a, b, c, sm = 0, ct = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    string s, t;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        g[i].clear();
    }
    for (i = 0; i < m; i++)
    {
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }

    int x, y;
    for (i = 1; i <= n; i++){
        if(g[i].size() == 1)
            continue;
        mn = LONG_LONG_MAX;
        for(int u:g[i]){
            mn = min(mn, (int) g[u].size());
        }
        if(mn == 1)
            y = i;
        else
            x = i;
    }
    cout << g[x].size() << ' ' << g[y].size()-1 << e;
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