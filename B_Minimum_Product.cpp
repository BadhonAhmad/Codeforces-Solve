#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007

void solve()
{
    int i, j, k, a, b, x, y, c, d,sm = 0, ct = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    string s, t;
    cin >> a >> b >> x >> y >> n;
    c = a, d = b, ct = n;
    while (a>x && n>0)
    {
        a--;
        n--;
    }
    while (b > y && n>0)
    {
        b--;
        n--;
    }
    sm = a * b;
    mn = min(sm, mn);
    a = c, b = d, n = ct;
    while (b > y && n>0)
    {
        b--;
        n--;
    }
    while (a > x && n>0)
    {
        a--;
        n--;
    }
    sm = a * b;
    mn = min(sm, mn);
    a = c, b = d, n = ct;
    cout << mn << e;

    return;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}