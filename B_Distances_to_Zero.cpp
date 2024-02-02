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
int a[N], d[N];
int32_t main()
{
    fastio;
    int ct, tc, f, sum, ans, t, x, y, z, i, j, k, b, c, n, m;
    ans = 0, ct = 0, f = 0, sum = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ans = n;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
            ans = 0;
        else
            ++ans;
        d[i] = ans;
    }
    ans = n;
    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
            ans = 0;
        else
            ans++;
        d[i] = min(ans, d[i]);
    }
    for (i = 0; i < n; i++)
    {
        cout << d[i] << " ";
    }
    return 0;
}
