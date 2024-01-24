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
    int n, i, sm = 0;
    cin >> n;
    vector <int> v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
        sm += v[i];
    }
    sort(all(v));
    int m; 
    cin >> m;

    for( i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        int ans1 = 0,ans2 =0;
        int sm1= 0,sm2 = 0;
        int vl = (upper_bound(v.begin(),v.end(),x) - v.begin());
        
        if(vl == n) vl--;
        if(vl == 0) vl++;

        if(v[vl] < x) ans1 += x-v[vl];

        ans1 += max(0ll, y - (sm - v[vl]));

        if(vl > 0) vl--;

        ans2 = max(0ll, x - v[vl]) + max(0ll, y - (sm - v[vl]));
        
        cout << min(ans1,ans2) << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    //cin >> t;

    while(t--)
        solve();

    return 0;
}

