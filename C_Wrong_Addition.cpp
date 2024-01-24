#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define pb(a) push_back(a)
#define yes cout << "YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout << "NO\n"
int ceil_div(int a, int b)
{
    return a % b == 0 ? a / b : a / b + 1;
}

void solve()
{
    int a, s;
    cin >> a >> s;
    vector<int> v;
    while (s)
    {
        int x = a % 10;
        int y = s % 10;
        if (x <= y)
        {
            v.pb(y - x);
        }
        else
        {
            s /= 10;
            y += 10 * (s % 10);
            if (x < y && y >= 10 && y <= 19)
                v.pb(y - x);
            else
            {
                cout << -1 << '\n';
                return;
            }
        }
        a /= 10;
        s /= 10;
    }
    if (a)
        cout << -1 << '\n';
    else
    {
        while (v.back() == 0)
        {
            v.pop_back();
        }
        reverse(all(v));
        for (auto it : v)
            cout << it;
        cout << '\n';
    }
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
