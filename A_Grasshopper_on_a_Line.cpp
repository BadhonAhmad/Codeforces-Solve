
#include <bits/stdc++.h>
using namespace std;

#define e       "\n"
#define int     long long int
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define ClearBit(x,k)   (x &= ~(1LL<<k))
const int N = 1e5 + 10;


void solve()
{

    int x, k;
    cin >> x >> k;
    if(x < k){
        cout << 1 << e;
        cout << x<<e;
    }else{
        if(x%k != 0){
            cout << 1 << e;
            cout << x << e;
        }
        else{
            cout << 2 << e;
            cout << x - 1 << ' ' << 1 << e;
        }
    }
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