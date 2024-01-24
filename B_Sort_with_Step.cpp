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
    int n, i, k;
    cin >> n >> k;
    vector<int> v(n+1);
    for(i = 1; i <= n; i++){
        cin >> v[i];
    }
    
    int f = 0, ct = 0;
    if(k == 1){
        cout << 0 << endl;
        return;
    }
    for(i = 1; i <= n; i++){
        if(v[i] % k != i % k) ct++;
    }
    if(ct == 0){
        cout << 0 << endl;
    }
    else if(ct == 2){
        cout << 1 << endl;
    }
    else cout << -1 << endl;

}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

