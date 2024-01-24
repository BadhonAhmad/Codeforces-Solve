#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
#define int             long long 
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod     1000000007


void solve()
{
    int q,mn=LONG_LONG_MAX;
    cin >> q;
    vector<int> v(q);
    string an;
    for (size_t i = 0; i < q; i++)
    {
        cin >> v[i];
        mn = min(mn, v[i]);
    }
    int x = v[0],f=0;
    an += '1';
    for (size_t i = 1; i < q; i++)
    {
        if(x<=v[i] && f==0){
            an += '1';
            x = v[i];
        }
        else if(v[i]>=mn && v[i]<=v[0]){
            an += '1';
            mn = v[i];
            f = 1;
        }
        else {
            an += '0';
        }
    }
    cout << an << e;

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