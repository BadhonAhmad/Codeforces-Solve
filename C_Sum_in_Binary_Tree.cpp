#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
#define int             long long 
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod     1000000007
int n;
int s1 = 0, s2 = 0;

void solve()
{
    
    cin >> n;
    s1 = 0;
    s1 += n;
    while (n)
    {
        s1 += (n) / 2;
        n /= 2;
    }
    cout << s1 << e;
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