#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int id, n, i;
    int mn = LONG_LONG_MAX;
    cin >> n;
    vector <int> v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
        if(mn > v[i])
        {
            mn = v[i];
            id = i;
        }
    }
    if(is_sorted(v.begin(),v.end())){
        cout << 0 << '\n';
        return;
    }
    for(i = id+1; i < n - 1; i++){
        if(v[i] > v[id] && v[i+1] < v[i]){
            cout << "-1\n";
            return;
        }
    }
    cout << id << '\n';
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

