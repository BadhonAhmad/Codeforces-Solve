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
    int n;
    cin >> n;
    int a[n];
    if(n == 2) {
        cout << 0;
        return;
    }//1 1 2 9 9 9 9 9

    //1 1 1 1 1 1 
    map<int, int> mp;
    int f = 0;
    int mx = LONG_LONG_MIN;
    set<int> st;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        st.insert(a[i]);
        mx = max(mx, a[i]);
        mp[a[i]]++;
        if(mp[a[i]] == n-1 || mp[a[i]] == n)
            f = 1;
    }
    //1 9 9 9 9 
    //1 2 2 3 9 9
    // 1 99 99 99 100 100
    //1 1 2 2 3 3 9
    //
    if(f){
        cout << 0;
        return;
    }
    sort(a, a + n);
    if(mp[mx]>=2 && mp[a[0]] == 1){
        cout << mx - a[1];
    }
    else if(mp[mx] == 1 && mp[a[0]] == 1 &&st.size() ==n){
        cout << min(mx - a[1],a[n-2]-a[0]);
    }
    else
        cout << min(a[n - 2] - a[0],a[n-1]-a[1]);
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