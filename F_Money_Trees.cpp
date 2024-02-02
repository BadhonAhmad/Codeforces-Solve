/**Everyone who is taken by death asks for more time, while 
everyone who has time makes excuses for procrastination.
--Ali Ibn Abi Talib(Ra)**/


#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define no cout << "NO\n"
#define prnt(v) for(auto it : v) cout<<it<<" ";cout<<"\n";
#define db(x) cout << #x << " = " << x << " , " << '\n';
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
#define N 200000
int n, k;
int a[N+5],h[N+5], pref[N+5],length[N+5];
bool get(int dist){
    bool found = false;
    for(int i = 0; i < n - dist + 1; i++){
        if(length[i] < dist) continue;
        int sm = pref[i+dist] - pref[i];
        if(sm <= k){
            found = true;
            break;
        }
    }
    return found;
}

void solve(){
    pref[0] = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        pref[i+1] = pref[i] + a[i];
    }

    for(int j = 0; j < n; j++){
        cin >> h[j];
    }
    length[n-1] = 1;
    for(int i = n-2; i >= 0; i--){
        if(h[i] % h[i+1] == 0){
            length [i] = length[i+1] + 1;
        }
        else{
            length[i] = 1;
        }
    }

    int l = 0, r = N, mx = LONG_LONG_MIN;
    while (l <= r)
    {
        int mid = (l+r) / 2;
        bool ok = get(mid);
        if(ok){
            l = mid  + 1;
            mx = max(mx, mid);
        }
        else{
            r = mid - 1;
        }
    }
    cout << mx << '\n';
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) 
solve();

    return 0;
}
