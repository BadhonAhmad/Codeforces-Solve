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

void solve(){
    int n, m, k, i, j, ct = 0, f = 0, ans = 0, sm = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, a, b, c, d;
    cin >> n;
    vector <int> v(n+1);
    map <pair<int,int>, int> mp;
    for(i = 1; i <= n; i++){
        cin >> v[i];
    }
    vector <pair <int, int>> vp;
    for(i = 1; i <= n; i++){
        mn = i;
        f = 0;
        while (v[i] == v[i+1] && i + 1 <= n)
        {
            i++;
            f = 1;
        }
        if(f)
            mp[{mn,i}]++;
    }
    cin >> m;

    for(i = 0; i < m; i++){
        cin >> a >> b;
        if(mp[{a,b}]){
            cout << "-1 -1\n";
        }
        else{
            cout << a <<" "<< (abs(a-b) == 1 ? b : a + 1) << '\n';
        }
    }
    cout << '\n';
    // for(auto i : vp){
    //     cout << i.first << ' ' << i.second << '\n';
    // }
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
