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
    int n,up=0,dow=0,rt=0,lt=0; 
    set<pair<int,int>> st;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b; 
        int x = st.size();
        cin >> a >> b;
        st.insert({a,b});
        if(x == st.size()){
            continue;
        }
        if(a > 0) rt = 1;
        if(a < 0) lt = 1;
        if(b > 0) up = 1;
        if(b < 0) dow = 1;
    }
    int sm  = up + dow + rt + lt;
    if(sm == 4){
        no;
    }
    else yes;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

