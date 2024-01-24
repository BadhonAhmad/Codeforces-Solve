#include <bits/stdc++.h>
using namespace std;

#define e "\n"
#define int long long
#define SetBit(x, k) (x |= (1LL << k))
#define CheckBit(x, k) (x & (1LL << k)) //(1&(x>>k))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007

void solve()
{
    int xa, xb, xc, ya, yb, yc,an=0;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    if (ya == yb && yb == yc)
    {
        if ((xb <= xa && xa <= xc) || (xc <= xa && xa <= xb))
        {
            cout << 1 << e;
        }
    }
    else if (xa == xb && xb == xc)
    {
        if ((yb <= ya && ya <= yc) || (yc <= ya && ya <= yb))
        {
            cout << 1 << e;
        }
    }
    else
    {
        an+=min(abs(xb-min(xc,xa)))
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