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
    map <int, int> mp;
    vector<int> v(n+1),vv(n+1),pos(n+1);
    for(i = 1; i <= n; i++){
        cin >> v[i];
        pos[v[i]] = i;
    }     

    for(j = 1; j <= n; j++){
        cin >> vv[j];

    }

    for(j = 1; j <= n; j++){
        a = pos[vv[j]] - j;
        if(a < 0) a += n;
        mp[a]++;
        mx=max(mx,mp[a]);
    }
    cout << mx << endl;


}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    //cin>>T;

    while(T--) solve();
    return 0;
}
