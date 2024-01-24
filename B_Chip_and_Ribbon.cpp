#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n,ans= 0, i;
    cin >> n;
    
    vector <int> v(n);
    int ct= 0;
    for(i = 0; i < n; i++){
        cin >>  v[i];
    }

    ans += v[0] -1;
    for(i = 1; i < n; i++){
        if(v[i] == 0) continue;
        if(v[i] > v[i-1])
            ans += v[i]-v[i-1];
    }
    
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

