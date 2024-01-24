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
#define deb(x) cout  << x << '\n';
#define endl "\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

bool cmp(pair<int,int> a, pair<int,int> b) {return a > b;}///boro theke choto base on 1st element
bool cmp2(pair<int,int>a, pair<int,int> b){ return a.second < b.second; }// choto theke boro base on 2nd element

void solve(){
    int n, m, k, i, j, ct = 0, f = 0, ans = 0, sm = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    //prnt(prime);
    cin >> n;
    vector<vector<array<int,2>>>g(n);
    vector<int> deg(n),a(n-1);
    int u;
    for(int u,v,i = 0; i < n-1; i++){
        cin >> u >> v;
        g[--u].push_back({--v,i});
        g[v].push_back({u,i});
        deg[u]++,deg[v]++;
    }
    if(*max_element(deg.begin(),deg.end())>2){
        cout << -1 << endl;
        return;
    }
    function<void (int,int,int c)> dfs = [&](int v,int p, int c){
        for(auto &[u, i] : g[v])if(u != p){
            a[i] = c;
            dfs(u,v,c^1);
        }
    };
    dfs(min_element(deg.begin(),deg.end())-deg.end(),-1,0);
    for(auto &x : a){
        cout << x + 2 << ' ';
    }
    cout << endl;


}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T=1;
    cin>>T;

    while(T--) solve();
    return 0;
}
