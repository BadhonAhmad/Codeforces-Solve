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
    int l , r  , a;
    cin >> l >> r >> a;
    if(l / a == r / a){
        cout << r / a + r % a << endl;
    }
    else{
        cout << max(r / a + r % a, r/a - 1 + a - 1) << '\n';
    }
    
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