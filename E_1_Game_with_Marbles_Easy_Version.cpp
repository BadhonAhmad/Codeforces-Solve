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
    int n;
    cin >> n;
    vector<int> a(n),b(n),ids(n);
    iota(ids.begin(),ids.end(),0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    sort(ids.begin(),ids.end(),[&](int i, int j){return a[i] + b[i] > a[j] + b[j];});

    int jk = 0;
    for(int i = 0; i < n; i++){
        cout << a[ids[i]] << ' ';
    }
    cout << endl;
    for(int j = 0; j < n; j++){
        cout << b[ids[j]] << ' ';
    }
    cout << endl;
    for(int i = 0; i < n ; i++){
        if(i & 1){//odd
            jk -= (b[ids[i]]-1);
        }
        else jk += (a[ids[i]]-1);
    }
    cout << jk << endl;

}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

