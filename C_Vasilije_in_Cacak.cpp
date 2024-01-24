#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x, mxsm;
        cin >> n >> k >> x;
        int minsm = (k * (k + 1)) / 2;
        mxsm = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2);
        if (mxsm >= x && minsm <= x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}