#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

void solve()
{
    int i, j, x, y, z, ct = 0, sm = 0, ans = 0, n, mx = -1, mn = LLONG_MAX;
    cin >> n >> x;
    int lo = 1, hi = 3000000000LL;
    for (i = 0; i < n; i++)
    {
        cin >> y;
        sm += y;
        x -= (y * y);
    }

    int mid;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;


        __int128 tst = n  * mid * 4 + 4 * sm;
        tst*=mid;

        if (x  == tst)
        {
            cout << mid << endl;
            return;
        }
        else if (x > tst)
            lo = mid + 1;
        else
            hi = mid - 1;
    }

    cout << mid << endl;

    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--)
        solve();
    return 0;
}