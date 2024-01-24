#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 998244353
#define N 1000006

void solve(){
    int n, k, source, desti;

    
    cin>> n >> k >> source >>desti;
    vector<int> x(n + 1),y(n + 1);
    for(int i = 1; i <= n; i++) cin >> x[i] >> y[i];

    int ans = abs(x[source]-x[desti]) + abs(y[source] - y[desti]);
    int mns = LONG_LONG_MAX/2,mnt = LONG_LONG_MAX/2;
    for(int i = 1; i <= k; i++){
        mns = min(mns, abs(x[source] - x[i]) + abs(y[source] - y[i]));
        mnt = min(mnt, abs(x[i]-x[desti]) + abs(y[i]-y[desti]));
    }

    ans = min(ans, mns + mnt);
    cout << ans  << endl; 
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

