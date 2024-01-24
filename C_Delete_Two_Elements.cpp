#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int  i, sm = 0 ; 
    int n;
    cin >> n;

    vector <int> v(n + 1),cum (n + 1);
    map <int, int> mp;

    for(i = 1; i <= n; i++){
        cin >> v[i];
        sm += v[i];
    }
    if((sm * 2) % n != 0){
        cout << 0 << endl;
        return;
    }
    int eq = (2 * sm )/ n,ans = 0;
   
    for(i = n; i > 0; i--){
        int x = eq - v[i];

        ans += mp[x];
        
        mp[v[i]]++;
    }
    cout << ans << endl;


}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

