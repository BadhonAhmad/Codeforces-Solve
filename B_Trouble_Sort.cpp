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
    vector <pair <int, int> > vp(n);
    for(i = 0; i < n; i++){
        cin >> vp[i].first;
    }
    for(i = 0; i < n; i++){
        cin >> vp[i].second;
        v[i] = vp[i].second;
    }
    if(is_sorted(vp.begin(),vp.end())){
        yes;
        return;
    }
    int ct = 0,ct1= 0;
    for(i = 0; i < n; i++){
        if(vp[i].second == 0){
            ct = 1;
        }
        else ct1= 1;
    }
    if(ct && ct1 ) yes;
    else 
    no;

}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

