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
    int n, i, j, sm = 0;
    cin >> n;
    vector <int> v(n+2);
    for(i = 0; i < n+2; i++){
        cin >> v[i];
    }
    sort(all(v));
    for(i = 0; i < n; i++){
        sm += v[i];
    }
    int sma = sm + v[n];
    int smb = sm + v[n + 1];
    int mxa = v[n+1];
    int mxb = v[n];
    if((sm == mxa) || (sm == mxb)){
        for(i = 0; i < n; i++){
            cout <<  v[i] << ' ';
        }
        cout << endl;
        return;
    }
    for(i = 0; i < n; i++){
        if(sma - v[i] == mxa){
            for(j = 0; j < n; j++){
                if(i != j) cout << v[j] << ' ';
            }
            cout << v[n]  << endl;
            return;
        }
        if(smb - v[i] == mxb){
            for(j = 0; j < n; j++){
                if(i != j) cout << v[j] << ' ';
            }
            cout << v[n + 1]  << endl;
            return;
        }
    }
    cout << -1 << endl;

}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

