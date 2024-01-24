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

    /*
        l r c 
        l r cs
        l r crs
        ls rs cs

    */
    int n, i, sm;
    cin >> n;
    vector <int> c(n),v,df;
    vector <pair <int, int> > vp;
    for(i = 0; i < n; i++){
        cin >> sm;
        vp.emplace_back(sm, 1);
    }
    for(i = 0; i < n; i++){
        cin >> sm;
        vp.emplace_back(sm,-1);
    }
    for(i = 0; i < n; i++){
        cin >> c[i];
    }

    sort(vp.begin(),vp.end());

    for(auto [x,t] : vp){
        if(t == 1){
            v.push_back(x);
        }else{
            df.push_back(x-v.back());
            v.pop_back();
        }
    }
    sort(df.begin(),df.end(),greater());
    sm = 0;

    for(i = 0; i < n; i++){
        sm += df[i] * c[i];
    }
    cout << sm << '\n';
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) solve();

    return 0;
}
