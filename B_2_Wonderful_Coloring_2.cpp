#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define yes cout << "YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout << "NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve()
{
    int n, i, k;
    cin >> n >> k;
    vector<int> v(n), ans(n);
    // vector<vector<int>> id(n + 1);
    map<int, vector<int>> id;
    set<int> st; // st{0};
    map<int, int> mp;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];

        if (id[v[i]].size() < k)
        {
            st.insert(v[i]);
            id[v[i]].push_back(i);
        }
    }
    int jk = 0;
    for (auto I : id)
    {
        jk += I.second.size();
    }
    jk -= (jk) % k;
    int b1 = jk / k;
    cout << b1 << endl;
    // int ct = 0, f = 0;
    // for (auto i : id)
    // {
    //     for (auto e : i.second)
    //     {
    //         ans[e] = ++ct;
    //         jk--;
    //         ct %= k;
    //         if (jk == 0)
    //         {
    //             f = 1;
    //             break;
    //         }
    //     }
    //     if (f)
    //         break;
    // }
    // for (auto i : ans)
    // {
    //     cout << i << ' ';
    // }
    // cout << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
