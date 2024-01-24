#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, i;
    cin >> n;
    vector <int> v(n);
    map <int, int> mp;
    for(i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
    }
    int ans = 0;
    for(auto i : mp){
        int a = i.second;
        if(i.first == 1){
            ans += (a * (a - 1)) / 2;
            ans += (a*mp[2]);
        }
        else{
           ans += (a * (a - 1)) / 2;
        }
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

