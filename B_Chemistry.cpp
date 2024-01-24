#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define CC(x) cout << "Case " << ++x << ":";
#define nn "\n"
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define pb(a) push_back(a)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 998244353
#define N 1000006

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    int od = 0, odsm = 0, evsm = 0, ev = 0;
    vector<int> ode, eve;
    for (auto it : mp)
    {
        int a = it.second;
        if (a % 2)
            od++, odsm += a, ode.push_back(a);
        else
            ev++, evsm += a, eve.push_back(a);
    }
    if (n - k == 1)
        yes;
    else
    {
        int ct = 0;


        for (int i = 0; i < ode.size(); i++)
        {
            if (k > 0)
            {
                ode[i]--;
                k--;
            }
            else
                ct++;
        }

        if (ct > 1)
            no;
        else yes;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
