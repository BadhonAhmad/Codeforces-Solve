#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int N = 2e5 + 10;
using namespace std;
/**********************************************************************/
int32_t main()
{
    fastio;
    int cnt = 0, tc, f = 0, sum = 0, ans = 0, t, x, y, z, i, j, cs, k, a, b, c, n, m;
    cin >> tc;
    cs = 1;
    while (tc--)
    {
        cin >> n >> m;
        vll v(n);
        ans = 0;
        vll mp(m, 0);
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i] % m]++;
        }
        if (mp[0])
        {
            ++ans;
        }
        for (i = 1; i < m; i++)
        {
            if (mp[i])
            {
                if (abs(mp[i] - mp[m - i]) <= 1)
                {
                    ans++;
                }
                else
                {
                    ans += abs(mp[i] - mp[m - i]);
                }
                mp[m - i] = 0;
            }
        }
        cout << ans << e;
    }
    return 0;
}
