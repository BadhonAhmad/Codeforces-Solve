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
    cout << endl;
#define endl "\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
#define deb(x) cout << #x << " = " << x << " , " << '\n';
#define N 200005

void solve()
{
    int n, m, k, i, j, ct = 0, f = 0, ans = 0, sm = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, a, b, c, d;
    cin >> a >> b >> k;
    vector<pair<int, int>> vp(k);
    map<int, int> mp1, mp2;
    map<pair<int, int>, int> mpr;
    multiset<pair<int, int>> st; // st{0};
    for (i = 0; i < k; i++)
    {
        cin >> vp[i].first;
    }
    for (i = 0; i < k; i++)
    {
        cin >> vp[i].second;
    }
    for (auto i : vp)
    {
        n = i.first;
        m = i.second;
        mpr[{n, m}]++;
        st.insert({n, m});
        mp1[n]++;
        mp2[m]++;
    }

    for (auto i : vp)
    {
        n = i.first;
        m = i.second;
        k = st.size();
        int cm = mpr[{n, m}];
        d = mp1[n];
        d += mp2[m] - cm;
        ans += k - d;
        mp1[n]--;
        mp2[m]--;
        st.erase(*st.begin());
    }
    // cout << ans << endl;
    deb(ans);
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T = 1;
    cin >> T;

    while (T--)
        solve();
    return 0;
}
