#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, n, l, r, j, ans = 0, x, lo, hi, mid, vl;
        cin >> n >> l >> r;
        vector<int> v(n + 1);
        for (i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin() + 1, v.end());
        for (i = 1; i <= n; i++)
        {
            int mn = l - v[i];
            int mx = r - v[i];
            int ind = n + 1, indd = n + 1;
            lo = i + 1, hi = n;
            while (lo <= hi)
            {
                mid = (lo + hi) / 2;
                if (v[mid] >= mn)
                {
                    ind = mid;
                    hi = mid - 1;
                }
                else
                    lo = mid + 1;
            }
            lo = i + 1, hi = n, mid;
            while (lo <= hi)
            {
                mid = (lo + hi) / 2;
                if (v[mid] <= mx)
                {
                    indd = mid;
                    lo = mid + 1;
                }
                else
                    hi = mid - 1;
            }
            if (indd <= n && ind <= n)
                ans += (indd >= ind ? indd - ind + 1 : 0);
        }
        cout << ans << endl;
    }
}