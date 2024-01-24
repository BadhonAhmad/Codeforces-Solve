#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define nl cout << "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define as cout << ans << "\n"
#define yn cout << (f ? "YES" : "NO") << "\n"
const int N = 2e5 + 10;
using namespace std;
int32_t main()
{
    fastio;
    int ct, tc, f, sum, ans = 99999999, t, x, y, z, i, j, k, a, b, c, d, n, m;
    cin >> tc;
    vll v(tc);
    x = LONG_LONG_MAX;
    ct = 0;
    for (i = 0; i < tc; i++)
    {
        cin >> v[i];
        x = min(v[i], x);
    }
//    cout << x, nl;
    vll vt;
    for (i = 0; i < tc; i++)
    {
        if (v[i] == x)
        {
            vt.pb(i);
        }
    }
    if (vt.size() == 2)
    {
        cout << vt[1] - vt[0];
    }
    else
    {
        for (i = 0; i < vt.size() - 1; i++)
        {
            ans = min(ans, abs(vt[i] - vt[i + 1]));
        }
        cout << ans;
    }
    return 0;
}
