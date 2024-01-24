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
#define endl "\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
#define N 200005

void solve(){
    int n, m, k, i, j, ct = 0, f = 0, ans,sm = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, a, b, c, d, temp;
    cin >> n;

    string s[n],t;
    set<string>st;
    for(i = 0; i < n; i++){
        cin >> s[i];
    }

    f = 1;
    for(i = 0; i < n; i++){
        t = s[i];
        sm = 0;
        ct = 0;
        for(j = 0; j < n; j++){
            string sk;
            sk += s[j];
            sk += s[j];
            int x = t.size();
            if(i != j){
                for(k = 0; k < sk.size(); k++){
                    string ark = sk.substr(k,x);
                    if(ark == t){
                        sm += k;
                        f = 1;
                        ct++;
                        break;
                    }
                }
            }
        }
        if(ct != n-1) f = 0;
        mn = min(sm, mn);
    }
    if(!f){
        cout << -1 << endl;
        return;
    }
    cout << mn << endl;
    
    
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    //cin>>T;

    while(T--) solve();
    return 0;
}
