#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define N 1000006
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int i, n, ans = 0; cin >> n;
    int a[n],b[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    b[0] = 1;
    sort(a,a+n);
    for(i = 1; i < n; i++){
        b[i] = min(b[i-1]+1, a[i]);
    }
    for(i = 0; i < n; i++){
        ans += a[i] - b[i];
    }
    cout << ans <<  '\n';
   
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

