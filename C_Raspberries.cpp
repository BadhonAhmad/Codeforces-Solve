#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nn "\n"

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = LONG_LONG_MAX;
    ll f = 0, ct = 0;
    ll ml = 1;
    ll tw = 0, fo = 0, th = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        
        x %= k;
        ml *= x;

        ml %= k;
       
        if (x == 1)
            ct++;
        if (x % k == 0 || ml % k == 0)
        {
            f = 1;
        }
        if (x == 2)
            tw++;
        if (x == 4)
        {
            fo++;
        }
        if (x == 3)
        {
            th++;
        }
         ans = min(ans, abs((x % k) - k));
    }

    if (f)
    {
        cout << 0 << nn;
        return;
    }
    if (fo >= 1 && k == 5)
    {
        cout << 1 << endl;
        return;
    }
    if (th >= 1 && k == 5)
    {
        cout << 2 << nn;
        return;
    }

    if (tw && ct && k == 4)
    {
        cout << 1 << endl;
        return;
    }
    if(k == 4 && th > 0){
        cout << 1 << endl;
        return;
    }
    if (k == 4 && ct > 1)
    {
        cout << 2 << nn;
        return;
    }
    cout << ans << nn;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
