/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int N = 1e5 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i, j, k, a = 0, b = 0, c, sm = 0, ct = 0, n, m, f = -9, mn = LONG_LONG_MAX, ans = 0;
    string s, t;
    cin >> s;
    n = s.size();
    for (i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ct++;
    }
    if (ct == n)
    {
        cout << ct * ct << e;
        return;
    }

    s += s;

    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            sm++;
        }
        else
        {
            sm = 0;
        }
        //cout << ans << "F" << sm << e;
        ans = max(ans, ((sm+1)/2)*(sm+1-(sm+1)/2));
    }
    
    cout << ans << e;
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