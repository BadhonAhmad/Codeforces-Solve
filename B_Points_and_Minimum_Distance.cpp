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

void solve(){
    int n; cin>> n;
    vector<int> v(2*n+1);
    for(int i = 1; i <= 2*n; i++){
        cin>> v[i];
    }
    sort(allr(v));
    int sm =0;
    vector<pair<int,int>>vp;
    vector<int > x, y;
    for(int i = n; i < 2 * n; i++){
        //sm += v[i-n] -v[i];
        x.push_back(v[i]);
        y.push_back(v[i-n]);
        vp.push_back({v[i],v[i-n]});
    }

    for(int i = 0; i< x.size() - 1; i++){
        sm += abs(x[i] - x[i+1]);
        sm += abs(y[i]-y[i+1]);
    }
    cout << sm << endl;
    for(auto it : vp){
        cout << it.first << " " << it.second << endl;

    }
    
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

