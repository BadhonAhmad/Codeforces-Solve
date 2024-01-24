#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
#define int             long long 
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define ClearBit(x,k)   (x &= ~(1LL<<k))
#define inf (1LL<<30)
const int N = 2e5 + 10;
int ar[N];
int n;
int dp[N],j;
int f(int x){
    if(x>=n-1){
        return 0;
    }
    
    if(dp[x] != -1){
        return dp[x];
    }
    int res=inf;
    res = min(res, f(x + 1) + abs(ar[x] - ar[x + 1]));
    if(x<n-2)
        res = min(res, f(x + 2) + abs(ar[x] - ar[x + 2]));
    return dp[x]=res;
}
void solve()
{
    int i;  
    cin >> n;
    memset(dp, -1, sizeof(dp));
    int ans = 0;
    for (i = 0; i < n; i++){
        cin >> ar[i];
    }
    
    cout << f(0);

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