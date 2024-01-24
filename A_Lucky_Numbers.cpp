/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int N = 1e5 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

int f(int n)
{
    int mx = 0, mn = 9;
    while (n)
    {
        mx = max(mx, n % 10);
        mn = min(mn, n % 10);
        n /= 10;
    }
    return mx - mn;
}
void solve()
{
    int i, j, k, a, b, c, sm = 0, n, m, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    string s, t;
    cin >> n >> m;
    a = f(n);
    sm = n;
    for (i = n; i <= min(m, n + 300); i++)
    {
        if (f(i) > a)
        {
            a = f(i);
            sm = i;
        }
    }
    cout << sm << e;
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