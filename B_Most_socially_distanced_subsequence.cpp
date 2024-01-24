#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, i;
    cin >> n;
    vector <int> v(n+1),ans;
    for(i = 1; i <= n; i++){
        cin >> v[i];
    }
    for(i = 1; i <= n; i++){
        if(i == 1 || i == n || (v[i-1] <v[i]) != v[i] < v[i+1])
            ans.push_back(v[i]);
    }
    cout << ans.size() << '\n';
    for(auto i : ans ) cout << i << ' ';
    cout << '\n';
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

