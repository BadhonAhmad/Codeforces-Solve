#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
#define int             long long 
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define ClearBit(x,k)   (x &= ~(1LL<<k))
const int N = 1e5 + 10;
void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    int p = 1;
    while (p*10-1<=b)
    {
        ans += a;
        p *= 10;
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