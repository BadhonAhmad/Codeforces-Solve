#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, i;
    cin >> n;
    vector<string> v(n);
    vector<pair<int,string>>vp;
    for(i = 0; i < n; i++){
        cin >> v[i];
        vp.push_back({v[i].size(),v[i]});
    }
    sort(all(vp));
    string bg = vp.back().second;
    int x = bg.size();
    for(int i = 0; i < n-1; i++){
        string mn = vp[i+1].second, cur = vp[i].second;
        if(mn.find(cur) > mn.size()){
            no;
            return;
        }
    }
    // for(auto it : vp){
        
    //     string s = it.second;
    //     if(bg.find(s) > x){
    //         no;
    //         return;
    //     }
    // }
    yes;
    for(auto it : vp){
        cout << it.second << endl;
    }
    
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    //cin >> t;

    while(t--)
        solve();

    return 0;
}

