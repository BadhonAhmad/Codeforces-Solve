#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
int vis[N];
bool dfs(int node)
{
    vis[node] == 1;
    for (auto child : g[node])
    {
        if (vis[child] == 1)
        {
            
            return false;
        }
        if (!vis[child])
        {
            vis[child] = 2;
        }
    }
    return true;
}
int main()
{
    int v, n, m;
    while (1)
    {
        /* code */

        cin >> v;
        if (v == 0)
            break;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        bool ans;
        for (int j = 0; j < v; j++)
        {
            if (!vis[j])
            {
                ans = dfs(j);
                if (!ans)
                    break;
            }
        }
        if (ans)
        {
            cout << "bicolorable" << endl;
        }
        else
            cout << "not bicolorable" << endl;
    }
}