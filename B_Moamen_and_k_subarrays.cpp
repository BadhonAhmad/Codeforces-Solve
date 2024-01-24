#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"Yes\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout<<"No\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n,k, i;
    cin >> n >> k;
    vector <int> v(n),vv(n);

    
    map <int, int> mp;
    for(i = 0; i < n; i++){
        cin >> v[i];
        vv[i] = v[i];
        mp[v[i]] = i;
    }
    int ct = 1;
    sort(all(v));
    for(i = 0; i < n-1; i++){
        int a = mp[v[i]];
        int b = mp[v[i+1]];
        if((b-a) == 1 && vv[a] <= vv[b] ){
            continue;
        }
        ct++;
    }
    if(ct <= k) yes;
    else no;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

