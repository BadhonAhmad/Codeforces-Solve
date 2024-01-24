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
    int i, j, k, a, b, c, sm = 0, n, m, f = 0, mx2 = LONG_LONG_MIN, mx1 = LONG_LONG_MIN;
    string s, t;
    cin >> n;
    vector<int> v(n + 1), vv(n + 1);
    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (i = 1; i <= n; i++)
    {
        cin >> vv[i];
    }

    if(n == 1) {
        yes;
        return;
    }
    //cout << mx1 << ' ' << mx2 << e;
    for(i = 1; i <= n; i++){
        if(v[i]>vv[i])
            swap(v[i], vv[i]);
    }
    for(i = 1; i <= n; i++){
        mx1 = max(v[i], mx1);
        mx2 = max(vv[i], mx2);
    }
    if(v[n] == mx1 && vv[n] == mx2)
        yes;
    else
        no;
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