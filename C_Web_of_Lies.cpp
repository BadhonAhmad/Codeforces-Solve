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
#define N 1e5+100

set<int> sa[1000000];
bool valid(int i) {
    if(*sa[i].rbegin() == i) return true;
    return false;
}

void solve(){
    int n, m, k, i, j, ct = 0, f = 0, ans = 0, sm = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, a, b, c, d;
    cin >> n >> m;
    for(i = 1; i <=n; i++) sa[i].insert(i);

    for(i = 0; i < m; i++){
        cin >> a >> b;
        sa[a].insert(b);
        sa[b].insert(a);
    }
    for(i = 1; i <= n; i++){
        if(valid(i)) ans++;
    }
    cin >> d;
    for(i = 0; i < d; i++){
        cin >> c;
        if(c == 1){
            cin >> a >> b;
            if(valid(a)) ans--;
            if(valid(b)) ans--;
            sa[a].insert(b);
            sa[b].insert(a);
            if(valid(a)) ans++;
            if(valid(b)) ans++;
        }
        else if(c == 2){
            cin >> a >> b;
            if(valid(a)) ans--;
            if(valid(b)) ans--;
            sa[a].erase(b);
            sa[b].erase(a);
            if(valid(a)) ans++;
            if(valid(b)) ans++;
        }
        else{
            cout << ans << endl;
        }
    }
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    //cin>>T;

    while(T--) solve();
    return 0;
}
