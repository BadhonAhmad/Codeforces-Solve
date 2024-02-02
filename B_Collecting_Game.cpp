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
    vector <pair <int, int> > vp(n+1),an;
    vector<int> cum(n+1),jaderniyeche(n+1,0);
    for(i = 1; i <= n; i++){
        cin >> a;
        vp[i].first = a;
        vp[i].second = i;
    }
    sort(all(vp));
    for(i = 1; i <= n; i++){
        cum[i] = cum[i-1] + vp[i].first;
    }
    //prnt(cum);
    int now ;
    for(i = 1; i < n; i++){
        a = cum[i];
        b = vp[i+1].first;
        now = a;
        int id = vp[i].second;
        if( a < b ){
            an.push_back({id,i-1});
        }
        else{
            ct = i - 1;
            j = i+1;
            while (now >= b && j <= n)
            {
                ct++;
                now += vp[j].first;
                j++;
                b = vp[j+1].first;
            }
            an.push_back({id,ct});
        }
    }

    sort(all(an));
    for(auto i : vp){
        cout << i.second << ' ';
    }
    cout << '\n';

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
