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
    int n, i, mn =LONG_LONG_MAX,mx= LONG_LONG_MIN;
    cin>>n;
    for(i = 0; i < n; i++){
        int x; cin>>x;
        mn=min(mn,x);
        mx=max(mx,x);
    }
    cout << mx - mn << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

