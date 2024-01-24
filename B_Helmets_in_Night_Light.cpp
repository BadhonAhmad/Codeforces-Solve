#include <bits/stdc++.h>
using namespace std;

#define int long long
#define CC(x) cout << "Case " << ++x << ":";
#define nn "\n"
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 998244353
#define N 1000006

void solve(){
    int n , m; cin >> n >> m;
    pair < int , int > p[n+10];
    for(int i = 1; i <= n; i++){
        cin >> p[i].second;
    }
    for(int i = 1; i <= n; i++){
        cin >> p[i].first;
    }
    int ans = m;
    p[n + 1] = {m, n};
    int cnt = 1;
    sort(p + 1, p + n + 2);
    
    for(int i = 1; i <= n + 1; i++){
        p[i].second = min(p[i].second,n-cnt);
        cnt+=p[i].second;
        ans += p[i].second * p[i].first;
        if(cnt == n) break;
    }
    cout << ans << endl;
    
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