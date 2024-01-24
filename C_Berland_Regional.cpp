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
#define N 100005
void solve(){
    int n, m, k, i, j, ct = 0, f = 0, ans = 0, sm = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, a, b, c, d;
    cin >> n;
    
    vector <int> v(n),cnt(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
        v[i]--;
    }

    for(i = 0; i < n; i++){
        cin >> cnt[i];
    }

    vector<vector<int>> vn(n+1);
    for(i = 0; i < n; i++){
        vn[v[i]].push_back(cnt[i]);
    }

    for(i = 0; i <= n; i++){
        sort(vn[i].begin(),vn[i].end(),greater<int>());
    }

    vector<vector<int>> lincum(n, vector<int>(1,0));

    for(i =0; i < n; i++){
        for(auto it : vn[i]){
            lincum[i].push_back(lincum[i].back()+ it);
            //cout << lincum[i].back() << ' ';
        }
        //cout << endl;
    }

    vector<int> anss(n);
    for(i = 0; i < n; i++){
        for(j = 1; j <= (int)(vn[i].size()); j++){
            anss[j-1] += lincum[i][vn[i].size()/j * j];
        }
    }

    for(i = 0; i < n; i++){
        cout << anss[i] << ' ';
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
