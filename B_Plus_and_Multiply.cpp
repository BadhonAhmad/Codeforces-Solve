#include <bits/stdc++.h>
using namespace std;

#define e "\n"
#define int long long
#define SetBit(x, k) (x |= (1LL << k))
#define CheckBit(x, k) (x & (1LL << k)) //(1&(x>>k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int N = 1e5 + 10;

void solve()
{
    int a, b, n;
    cin >> n >> a >> b;
    if(a == 1){
        if((n-1)%b == 0) {
            yes;
        }
        else
            no;
        return;
    }
    int j = 1;
    int z = 1;
    while (z <= n)
    {
        if((n-z)%b == 0){
            yes;
            return;
        }
        z *= a;
    }
    no;
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