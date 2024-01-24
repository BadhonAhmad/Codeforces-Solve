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
    int i, j, k, a, b, c, sm = 0, ct = 0, n, m, f = 0, mn = 0, mx = LONG_LONG_MIN;
    string s, t;
    cin >> n >> k;
    vector<int> v(n+1),cumf(n+1),cumr(n+1);
    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
        sm += v[i];
    }
    sort(all(v));
    j = n;
    for (i = 1; i <= n; i++,j--){
        cumf[i] = cumf[i - 1] + v[i];
        cumr[i] = cumr[i-1] + v[j];
    }

    for (i = 0; i <= k; i++)
    {
        mn = sm - cumf[i * 2] - cumr[k - i];
        mx = max(mn, mx);
    }
    cout << mx << e;

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