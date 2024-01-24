#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
#define int             long long 
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define yes     cout<<"Yes\n"
#define no      cout<<"No\n"
#define mod     1000000007


void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v1(n), v2(n), v3(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    
    for (size_t i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    
    for (size_t i = 0; i < n; i++)
    {
        cin >> v3[i];
    }
    if(x == 0){
        yes;
        return;
    }
    int ans = 0,old=0;
    reverse(v1.begin(), v1.end());
    reverse(v2.begin(), v2.end());
    reverse(v3.begin(), v3.end());

    while (!v1.empty())
    {
        int y = v1.back();
        v1.pop_back();
        old |= y;
        if(old <= x){
            if(old == x){
                yes;
                return;
            }
            ans |= y;
            if(ans == x){
                yes;
                return;
            }
        }
        else break;
    }
    old = 0;
    while (!v2.empty())
    {
        int y = v2.back();
        v2.pop_back();
        old |= y;
        if(old <= x){
            if(old == x){
                yes;
                return;
            }
            ans |= y;
            if(ans == x){
                yes;
                return;
            }
        }
        else break;
    }
    old=0;
    while (!v3.empty())
    {
        int y = v3.back();
        v3.pop_back();
        old |= y;
        if(old <= x){
            ans |= y;
            if(old == x){
                yes;
                return;
            }
            if(ans == x){
                yes;
                return;
            }
        }
        else break;
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