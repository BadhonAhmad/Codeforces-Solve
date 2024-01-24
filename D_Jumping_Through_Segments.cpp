/**Everyone who is taken by death asks for more time, while 
everyone who has time makes excuses for procrastination.
--Ali Ibn Abi Talib(Ra)**/


#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define no cout << "NO\n"
#define prnt(v) for(auto it : v) cout<<it<<" ";cout<<"\n";
#define db(x) cout << #x << " = " << x << " , " << '\n';
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
bool f(int mid, vector<pair<int,int>> & vp){
    int l = 0, r = 0;
    for(int i = 0; i < vp.size(); i++){
        l = max(l - mid, vp[i].first);
        r = min(r + mid , vp[i].second);
        if(l > r) return false;
    }
    return true;
}
void solve(){
    int n, i, ans;
    cin >> n;
    vector <pair <int, int> > vp(n);
    for(i = 0; i < n; i++){
        cin >> vp[i].first >> vp[i].second;
    }
    int lo = 0, hi = 10000000000,mid;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if(f(mid,vp)){
            ans = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    cout << ans << '\n';
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) solve();

    return 0;
}
