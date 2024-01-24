#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int N=2e5+10;
using namespace std;
/**********************************************************************/
int32_t main()
{
    fastio;
    int cnt = 0,tc, f = 0, sum = 0, ans = LONG_LONG_MIN, t,x, y, z, i, j,cs, k, a, b, c, n, m;
    cin >> n >> m;
    vll v(n);
    vll vv(n);
    vll vr(n);
    cin >> v[0];
    vv[0] = v[0];
    for ( i = 1; i < n; i++)
    {
        cin >> v[i];
        vv[i] = v[i] + vv[i - 1];
    }
    vr[n - 1] = v[n - 1];
    for ( i = n-2; i >= 0 ; i--)
    {
        vr[i] = vr[i + 1] + v[i];
    }
    for ( i = 0; i < n; i++)
    {
        if(vv[i]<=m)
            ans = max(vv[i], ans);
        if(vr[i]<=m){
            ans = max(ans, vr[i]);
        }
    }
    cout << ans << e;

    return 0;
}

