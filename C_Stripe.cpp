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
    int ct, tc, f, sum, ans, t, x, y, z, i, j, k, a, b, c, d, n, m;

    ans = 0, ct = 0, f = 0, sum = 0;
    cin >> n;
    string s1, s2, s3;
    vll v(n + 1), vv;
    set<int> s;
    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
        v[i] += v[i - 1];
    }
    if (1 == s.size())
    {
        cout << n, nl;
        for (i = 0; i < n; i++)
        {
            cout << i + 1 << ' ';
        }
        return 0;
    }
    for (i = 1; i <= n; i++)
    {
        if ((v[i] - v[i - 1] == (v[n] - v[i] + v[i - 1]) / (n - 1)) && (v[n] - v[i] + v[i - 1]) % (n - 1) == 0)
        {
            vv.pb(i);
        }
    }
    cout << vv.size(), nl;
    if (vv.size() == 0)
        return 0;
    for (auto it : vv)
    {
        cout << it << ' ';
    }

    return 0;
}
