/**Everyone who is taken by death asks for more time, while 
everyone who has time makes excuses for procrastination.
--Ali Ibn Abi Talib(Ra)**/


#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define no cout << "NO\n"
#define prnt(v) for(auto it : v) cout<<it<<" ";cout<<endl;
#define deb(x) cout << #x << " = " << x << " , " << '\n';
#define endl "\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, m, k, i, j, ct = 0, f = 0, ans = 0, sm = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, a, b, c, d;
    cin >> n;
    vector <int> ev(n),od(n);
    map<int,int>evv,odd;
    for(i = 0; i < n; i++){
        cin >> od[i];
        odd[od[i]] = i;
    }
    for(i = 0; i < n; i++){
        cin >> ev[i];
        evv[ev[i]] = i;
    }
    if(od[0] < ev[0]){
        cout << 0 << endl;
        return;
    }
    
   
    ans = 1e9;
    for(i = 2; i <= 2* n; i += 2){
        mn = min(mn,evv[i-1]);
        ans = min(ans, evv[i] + mn);
    }
    cout << ans << endl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) solve();
    return 0;
}
