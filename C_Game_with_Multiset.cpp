#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define yes cout << "YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout << "NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
vector<int>p(30);
void solve()
{
    int i, n;
    
    cin >> n;
    map<int, int> mp;

    for (i = 0; i < n; i++)
    {
        int q, v;
        cin >> q >> v;
        if (q == 1)
        {
            mp[p[v]]++;
        }
        else
        {
            for(int i = 30 ; i >= 0; i--){
                if(v >= p[i] && v != 0){
                    if(mp.count(p[i])){
                        v -= (min(v/p[i],mp[p[i]])) * p[i];
                    }
                }
            }
            if(v == 0){
                yes;
            }
            else no;
           
        }
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    p[0] = 1;
    for(int i = 1; i<30; i++){
        p[i] = p[i-1ll] * 2ll;
    }
    int t = 1;
    // cin >> t;

    while (t--)
        solve();

    return 0;
}