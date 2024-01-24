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
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++){
        cin >> ar[i];
    }
    int prev = -1,ans=0;
    for (int i = 0; i < n; i++){
        if(ar[i] == 1){
            if(prev == -1)
                ans = 1;
            else
                ans *= (i+1) - prev;
            prev = i+1;
        }
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