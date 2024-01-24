#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 998244353
#define N 1000006
#define inf 2e18
int pre[100];
vector<string > tt;
int f(string s, string t){
    int ps = 0, pt = 0 , f = 0;
    while (ps < s.size() && pt < t.size())
    {
        if(s[ps] == t[pt]){
            pt++;
        }
        ps++;
    }
    return (int)s.size() - pt  + (int)t.size() - pt ;
    
}
void solve(){
    
    // for(int i = 0; i< ct; i++){
    //     cout << pre[i] <<' ';
    // }
    string s;
    cin >> s;
    int ans = LONG_LONG_MAX;
    for(auto it : tt){
        int op = f(s,it);
        ans = min(ans,op);
    }
    cout << ans << endl;

}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ct = 0;
    
    for(int i = 1; i <= inf; i = i * 2){
        tt.push_back(to_string(i));
    }
    int t=1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

