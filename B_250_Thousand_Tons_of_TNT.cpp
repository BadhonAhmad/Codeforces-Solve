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
    int n, i, j;
    cin >> n;
    int mx = LONG_LONG_MIN,mn = LONG_LONG_MAX;
    vector <int> v(n+1),cum(n + 1);
    for(i = 1; i <= n; i++){
        cin >> v[i];
        cum[i] += cum[i-1] + v[i];
        mx= max(v[i],mx);
        mn= min(v[i],mn);
    }
    int df = LONG_LONG_MIN;
    df = (mx - mn);
    if(mx == mn){
        cout << 0 << '\n';
        return;
    }
    for(i = 2; 2 * i <= n; i++){
        int mna = LONG_LONG_MAX;
        int mxb = LONG_LONG_MIN;
        if(n % i == 0){
            for(j = 2 * i; j<= n; j += i){
                int a = cum[j] - cum[j-i];

                int b = cum[j - i] - cum[j - 2 * i];
                mna= min(mna, min(a,b));
                mxb= max(mxb,max(a,b));
            }
            df = max(df,abs(mna-mxb));
        }
    }
    cout << df << '\n';
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

