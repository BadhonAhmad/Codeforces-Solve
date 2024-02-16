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
#define prnt(v) for(auto it : v) cout<<it<<" ";cout<<"\n";
#define db(x) cout << #x << " = " << x << " , " << '\n';
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

vector<vector<int>> g;
vector<int> cnt;

void dfs(int v,int p){
    if(g[v].size() == 1 && g[v][0] == p){
        cnt[v] = 1; 
    }
    else{
        for(auto u : g[v]){
            if(u != p){
                dfs(u, v);
                cnt[v] += cnt[u];
            }
        }
    }
}

void solve(){
    int n, m, k, i, j, ct = 0, f = 0, ans = 0, sm = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, a, b, c, d;
    cin >> n;
    g.assign(n,vector<int>());
    for(i = 0; i < n - 1; i++){
        cin >> a >> b;
        a--,b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    cnt.assign(n, 0);
    
    cin >> m;
    dfs(0,-1);
    for(i = 0; i < m; i++){
        cin >> a >> b;
        a--,b--;
        cout << cnt[a] * cnt[b] << '\n';
    }
    
    //prnt(v);


}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) 
        solve();

    return 0;
}
