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
    int mn=LONG_LONG_MAX,n, i;
    cin >> n;
    vector <int> v(n),vv(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
        vv[i] = v[i];
        mn = min(mn,v[i]);
    }

    sort(all(vv));

    for(int i = 0; i < n; i++){
        if(v[i] != vv[i] && v[i] % mn != 0){
                no;
                return;
        }
    }
    yes;
    
    
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

