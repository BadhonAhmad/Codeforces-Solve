#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n * m);
    for (int i = 0; i < m * n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int mn = min(m, n);
    int arew = m * n - mn;
    int ans = 0;
    ans = arew * (v[n * m - 1] - v[0]);
    int add = max(abs(v[0] - v[m * n - 2]), abs(v[1] - v[m * n - 1]));
    cout << ans + (mn - 1) * add << endl;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}