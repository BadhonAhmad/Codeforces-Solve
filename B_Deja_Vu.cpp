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
    int n, q , f = 0; 
    cin >> n >> q;
    vector<int> a(n),vis(35);
    for(int i = 0 ; i < n; i++) cin >> a[i];
    for(int j = 0; j < q; j++){
        int x; cin >> x;
        if(vis[x]) continue;
        vis[x] = 1;
        
        int div = (1LL << x),add =  (1LL << (x - 1));

        for(int j = 0; j < n; j++){
            if(a[j] % div == 0){
                a[j] += add;
            }
        }
    }
    for(auto i : a) cout << i << ' '; 
        cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

