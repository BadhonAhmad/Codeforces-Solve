/**Everyone who is taken by death asks for more time, while 
everyone who has time makes excuses for procrastination.
--Ali Ibn Abi Talib(Ra)**/


#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES\n"
#define all(a) a.begin(), a.end()
#define sj size()
#define no cout << "NO\n"
#define prnt(v) for(auto it : v) cout<<it<<" ";cout<<"\n";
#define deb(x) cout << #x << " = " << x << " , " << '\n';
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, i;
    cin >> n;
    vector <int> v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    int sm = 0,cnt,f,now,j,mn = n;
    for(i = 0; i < n; i++){
        sm += v[i];
        cnt = 1,f = 1,now = 0;
        for(j = i+1; j < n; j++){
            now += v[j];
            if(now > sm){
                f = 0;
                break;
            }
            if(now == sm){
                cnt++;
                now = 0;
            }
        }
        if(now || !f) continue;
        mn = min(n-cnt,mn);
    }
    cout << mn << endl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) solve();
    return 0;
}
