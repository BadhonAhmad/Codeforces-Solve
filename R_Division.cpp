/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long int
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define ClearBit(x,k)   (x &= ~(1LL<<k))
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
const int N = 1e5 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    cin >> a >> b;
    if(a%b != 0){
        cout << a << e;
        return;
    }
    vector<int> div;
    int tm = b;
    for (i = 2; i * i <= b; i++){
        if(b%i == 0){
            div.push_back(i);
            while (tm%i == 0)
            {
                tm /= i;
            }
        }
    }
    if(tm>1)
        div.push_back(tm);
    for(auto d:div){
        int tmp = a;
        while (tmp%b == 0)
        {
            tmp /= d;
        }
        mx = max(mx, tmp);
    }
    cout << mx << e;
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