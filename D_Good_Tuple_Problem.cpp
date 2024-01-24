#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define pb(a) push_back(a)
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define mod 998244353
#define N 200200

int A[N], B[N];
vector<int> g[N];
bool bipartite = true;
int X[N];
void dfs(int a, int mark)
{
    X[a] = mark;
    for (auto ch : g[a])
    {
        if (X[ch] == -1)
        {
            dfs(ch, 1 - mark);
        }
        else if (X[ch] == X[a])
        {
            bipartite = false;
        }
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> A[i];
        A[i]--;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
        B[i]--;
    }
    for (int i = 0; i < m; i++)
    {
        g[A[i]].push_back(B[i]);
        g[B[i]].push_back(A[i]);
    }
    for (int i = 0; i < N; i++)
        X[i] = -1;
    for (int i = 0; i < N; i++)
    {
        if (X[i] == -1)
            dfs(i, 0);
    }
    if (bipartite)
        yes;
    else
        no;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
