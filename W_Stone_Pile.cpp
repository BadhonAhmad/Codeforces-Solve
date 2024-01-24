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
    int n,i;
    cin >> n;
    int w[n];
    for ( i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int mn = LONG_LONG_MAX;
    for (int i = 1; i < (1<<n); i++){
        int wt1 = 0, wt2 = 0;
        for (int j = 0; j < n; j++){
            
            if(CheckBit(i,j))
                wt1 += w[j];
            else
                wt2 += w[j];

        }
        mn = min(mn, abs(wt1 - wt2));
    }
    cout << mn;

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