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
    int n, i;
    cin >> n;
    vector <int> v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(allr(v));
    int ans = 0;
    for(i = 0; i < n; i++){
        if(i % 2 == 0){
            if(v[i] % 2 == 0){
                ans += v[i];
            }
        }
        if(i % 2 == 1){
            if(v[i] % 2 == 1){
                ans-=v[i];
            }
        }
    }
    if(ans == 0){
        cout << "Tie\n";
    }
    else if(ans  > 0) cout << "Alice\n";
    else cout << "Bob\n";
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

