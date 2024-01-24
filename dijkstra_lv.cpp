#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 10;
const int inf = 1e10 + 10;

vector<pair<int, int>> g[N];
vector<int> vis(N, 0);
    vector<int> dist(N, inf);
int par[N];

bool dijkstra(int source, int end)
{
    
    set<pair<int, int>> st; // wt,node .. 1st
    st.insert({0, source});
    dist[source] = 0;

    while (st.size() > 0)
    {
        auto node = *st.begin();
        int v = node.second;
        int dis = node.first;

        st.erase(st.begin());
        vis[v] = 1;
        if (v == end)
            return true;

        for (auto child : g[v])
        {
            int child_v = child.first;
            int wt = child.second;
            if (dist[v] + wt < dist[child_v])
            {
                dist[child_v] = dist[v] + wt;
                st.insert({dist[child_v], child_v});
                par[child_v] = v;
            }
        }
    }
    return false;
}

signed main()
{
    long long x, y, z, n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
            int  wt;
            cin >> x >> y >> wt;
            g[x].push_back({y, wt});
        g[y].push_back({x, wt});
    }
    long long st=1, en=n;
    bool ans= dijkstra(st-1, en-1);
    x = en - 1;
    vector<long long> res;
    while (~x)
    {
        res.push_back(x+1);
        x = par[x];
    }
    reverse(res.begin(), res.end());
    if(ans){
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
    }
   else
       cout<<-1;
}
