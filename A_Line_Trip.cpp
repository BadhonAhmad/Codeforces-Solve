#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n,k, i,x;
    cin >> n >> x;
    vector <int> v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(all(v));
    int mx = LONG_LONG_MIN;
    mx = v[0] - 0;
    for(i = 1; i < n; i++){
        mx = max(v[i]-v[i-1],mx);
    }
    mx = max(mx,(x-v[n-1])*2 );
    cout << mx << endl;

}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

