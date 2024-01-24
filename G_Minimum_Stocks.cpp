#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
ll ceil_div(ll a, ll b) { return a % b == 0 ? a / b : a / b + 1; }

void solve()
{
    int n;
    cin >> n;
    multiset<pair<int, string>> mst;
    map<string, int> mp;
    int ct = 1;
    for (int i = 0; i < n; i++)
    {
        int q, price;
        string nm;
        cin >> q >> nm;
        if (q == 1)
        {
            cin >> price;
            mst.insert({price, nm});
            mp[nm] = price;
        }
        else if (q == 2)
        {
            cin >> price;
            int a = mp[nm];
            string sk = nm;
            mst.erase({a, nm});
            mst.insert({price, nm});
            mp[nm] = price;
        }
        else
        {
            auto it = *mst.begin();
            cout << it.second << " " << i + 1 << endl;
            mst.erase(it);
        }
    }
}


int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;

    while (t--)
        solve();

    return 0;
}
