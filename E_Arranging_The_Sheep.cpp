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
    cin >> n >> m >> k;
    a = 0,b = 0, c = 0, d = 0;
    vector <int> v(n),vv(m);
    map <int, int> mp1,mp2;
    vector<int> s1(k+1),s2(k+1);
    for(i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] <= k/2 && !mp1[v[i]] ){
            a ++ ;
            s1[v[i]] = 1;
        }
        else if(!mp1[v[i]] && v[i] > k/2 && v[i] <= k){
            b++;
            s2[v[i]] = 1;
        }
        mp1[v[i]]++;
    }
    for(i = 0; i < m; i++){
        cin >> vv[i];
        if(vv[i] > k/2  && !mp2[vv[i]] && vv[i] <= k){
            c++;
            s1[vv[i]] = 1;
        }
        else if(!mp2[vv[i]] && vv[i] <= k/2){
            d++;
            s2[vv[i]] = 1;
        }
        mp2[vv[i]]++;
    }
    int f1 = 0,f2 = 0;
    for(i = 1; i <= k; i++){
        if(!s1[i]){
            f1 = 1;
        }
    }
    for(i = 1; i <= k; i++){
        if(!s2[i]){
            f2 = 1;
        }
    }
    if(f1 && f2){
        no;
    }
    else yes;




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
