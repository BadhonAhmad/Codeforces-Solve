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
int cnt = 0,tc, f = 0, sum = 0, ans = -1, t,x, y, z, i, j,cs, k, a, b, c, n, m;
vll v(N), vv(N);
int cal(int mi){
    for ( i = 0; i < n; i++)
    {
        if((v[i]*mi-vv[i])>0){
            sum -= v[i] * mi - vv[i];
        }

    }
    return sum;
}
int32_t main()
{
    fastio;
    cin >> n >> k;
    
    for ( i = 0; i < n; i++)
    {
        cin >> v[i];

    }
    for ( i = 0; i < n; i++)
    {
        cin >> vv[i];
    }
    int lo = 0, hi = 1e14, mi;
    while (lo<=hi)
    {
        sum = k;
        mi = (lo + hi) / 2;
        if(cal(mi)>=0){
            ans=mi;
            lo = mi + 1;
        }
        else
            hi = mi - 1;
    }
    cout << ans << e;

    return 0;
}

