#include <bits/stdc++.h>
using namespace std;

#define ll long long
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
    int n , m; 
    cin >> n >> m;

    vector< int > v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(all(v));
    //2 3 5 7 11 13 17 19
    int ans = 0,mx = INT_MIN;
    for(int i = 0; i < n; i++){
        int a = v[i] + m -1;
        ans = abs(v.begin()-(upper_bound(v.begin(),v.end(),a))) - i ;
        mx=max(ans, mx);
    }
    cout << mx ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while(t--)
        solve();

    return 0;
}

