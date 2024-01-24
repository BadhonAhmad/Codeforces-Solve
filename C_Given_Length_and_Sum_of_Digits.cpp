/**Everyone who is taken by death asks for more time, while
everyone who has time makes excuses for procrastination.
--Ali Ibn Abi Talib(Ra)**/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define no cout << "NO\n"
#define prnt(v)            \
    for (auto it : v)      \
        cout << it << " "; \
    cout << "\n";
#define db(x) cout << #x << " = " << x << " , " << '\n';
#define db2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << '\n'
#define db3(x, y, z) cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << '\n'
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
int dgtsm(vector<int> &v)
{
    int sm = 0, i, n = v.size();
    for (i = 0; i < n; i++)
    {
        sm += v[i];
    }
    return sm;
}
void solve()
{
    int m, s;
    cin >> m >> s;
    int mn = 1, mx = m * 9;
    if (s == 0 && m == 1)
    {
        cout << "0 0";
        return;
    }
    if ((s < mn || s > mx))
    {
        cout << -1 << ' ' << -1;
        return;
    }
    vector<int> v(m, 0), mxi(m, 9);
    v[0] = 1;
    int a = dgtsm(v);
    int f = 0;
    for (int j = m - 1; j >= 0; j--)
    {
        a = dgtsm(v);
        if (a == s)
        {
            break;
        }
        for (int k = 1; k <= 9; k++)
        {
            v[j] = k;
            a = dgtsm(v);
            if (a == s)
            {
                f = 1;
                break;
            }
        }
        if (f)
        {
            break;
        }
    }
    f = 0;
    for (int j = m - 1; j >= 0; j--)
    {
        a = dgtsm(mxi);
        if (a == s)
        {
            break;
        }
        for (int k = 8; k >= 0; k--)
        {
            mxi[j] = k;
            a = dgtsm(mxi);
            if (a == s)
            {
                f = 1;
                break;
            }
        }
        if (f)
            break;
    }
    for (auto i : v)
    {
        cout << i;
    }
    cout << ' ';
    for (auto i : mxi)
    {
        cout << i;
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T = 1;
    // cin>>T;

    while (T--)
        solve();

    return 0;
}
