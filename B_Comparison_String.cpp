
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
    int n, i, ct = 0;

    cin >> n;
    string s;
    cin >> s;
    set<int> st;
    int mx = (1 >> 30);
    for (i = 0; i < n-1; i++){
        if(s[i] == s[i+1]){
            ct++;
        }
        else{
            mx = max(ct, mx);
            ct = 0;
        }
        mx = max(ct, mx);
    }
    cout << mx+2 << e;
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