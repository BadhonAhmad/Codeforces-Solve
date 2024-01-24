#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
#define int             long long 
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod     1000000007


void solve()
{
    int n;
    cin >> n;
    string s,ans;
    cin >> s;
    int i = 0;
    int inc = 1;
    while (1)
    {
        ans += s[i];
        i += inc;
        inc++;
        if(i>=n) break;
    }
    cout << ans;
    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
        solve();
    return 0;
}