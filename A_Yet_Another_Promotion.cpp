#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define nl cout<<"\n"
#define as cout << ans << "\n"
#define yn cout << (f ? "YES" :"NO") << "\n"
const int N=2e5+10;
using namespace std;
/**********************************************************************/
int32_t main()
{
    fastio;
    int ct,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j,k, a, b, c, n, m;
    cin >> tc;
    while (tc--)
    {
        ans = 0,ct = 0,f = 0,sum = 0;  
        cin >> a >> b;
        cin >> n >> m;
        k = n / (m + 1);
        x = n - k * (m+1);
        j = min(a, b) * n;
        ans = k * m * a + min(a, b) * x;
        cout << min(j, ans) ;
        nl;
    }
    return 0;
}

