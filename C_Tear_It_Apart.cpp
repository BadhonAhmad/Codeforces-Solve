/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>

using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int N = 1e5 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i, j, k, a = -9, b, c, sm = 0, ct = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    string s, t;
    cin >> s;
    n = s.size();
    for (char h = 'a'; h <= 'z'; h++)
    {
        ct = 0,mx=0;
        for (j = 0; j < n; j++)
        {

            if (s[j] != h)
            {
                ct++;
                mx = max(ct, mx);
            }
            else
                ct = 0;
        }
        sm = 0;
        while (mx)
        {
            mx /= 2;
            sm++;
        }
        mn = min(sm, mn);
    }

    cout << mn << e;

    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}