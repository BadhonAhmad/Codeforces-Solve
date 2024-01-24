#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 998244353
#define N 1000006

void solve(){
    int ans = 0, n, k;
    cin >> n >> k;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    sort(allr(v));
    for(int i = k ; i < 2 * k; i++){
        if(v[i] == v[i-k]) ans ++;
    }
    for(int i = 2 * k; i < n; i++) ans += v[i];
    cout << ans <<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

