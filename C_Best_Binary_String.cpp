
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
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n;i++){
        if(i == 0 && s[i] == '?'){
            cout << 0;
            s[i] = '0';
        }
        else if(s[i] == '?'){
            cout << s[i - 1];
            s[i] = s[i - 1];
        }
        else
            cout << s[i];
    }
    cout << e;
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