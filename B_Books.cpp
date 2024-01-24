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
    int cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j,cs, k, a, b, c, n, m;
    cin >> n >> t;
    vll v(n+7);
    cin >> v[1];
    for ( i = 2; i <= n; i++)
    {
        cin >> v[i];
        v[i]+= v[i - 1];
    }
    if(v[n] <= t){
        cout << n << e;
        return 0;
    }
    i = 1;
    while (i <= n)
    {

        int lo = i, hi = n;
        
        while (lo <= hi)
        {
            int mi = (lo + hi)/2;
            if(v[mi]-v[i-1] <= t){
                ans = max(ans, mi - i + 1);
                lo = mi + 1;
            }
            else
                hi = mi - 1;
        }
        i++;
    }

    cout << ans << e;

    return 0;
}

