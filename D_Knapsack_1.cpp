#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
#define int             long long 
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define ClearBit(x,k)   (x &= ~(1LL<<k))
const int N = 1e5 + 10;
int wt[105], val[105];
int dp[105][100005];
int func(int ind,int wt_left){
    if(ind < 0)
        return 0;
    if(wt_left == 0)
        return 0;
    if(dp[ind][wt_left] != -1) return dp[ind][wt_left];

    int ans = func(ind - 1, wt_left);
    if(wt_left-wt[ind] >= 0)
    ans = max(ans, func(ind - 1, wt_left-wt[ind])+val[ind]);
    return dp[ind][wt_left] = ans;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    int i,j,n, w;
    cin >> n >> w;
    for (i = 0; i < n; i++){
        cin >> wt[i] >> val[i];
    }
    cout << func(n - 1, w);
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