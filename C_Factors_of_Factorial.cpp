#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
#define int             long long 
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define ClearBit(x,k)   (x &= ~(1LL<<k))
const int N = 1e5 + 10;
const int mod = 1000000007;

void solve()
{
    int n;
    cin >> n;
    //
    map<int, int> mp;
    for (int i = 2; i <= n; i++){
        int j = i;
        if(j%2 == 0){
            while (j%2 == 0)
            {
                /* code */
                mp[2]++;
                j /= 2;
            }
        }
        for (int l = 3; l * l <= i;l+=2){
            if(j%l == 0){
                while (j%l == 0)
                {
                    mp[l]++;
                    j /= l;
                }
            }
        }
        if(j>1)
            mp[j]++;
    }
    int ans = 1;
    for (int i = 1; i <= n; i++){
        mp[i]++;
        ans *= mp[i];
        ans %= mod;
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