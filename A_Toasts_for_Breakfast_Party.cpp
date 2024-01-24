#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define CC(x) cout << "Case " << ++x << ":";
#define nn "\n"
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define mod 998244353
#define N 1000006

void solve(){
    int n; cin >> n;
    set<int> st;//st{0};
    for(int i = 0; i< n; i++){
        int x;
        cin >> x;
        st.insert(x);
    }
    if(st.size() == 1){
        yes;
    }
    else no;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    //cin >> t;
    while(t--)
        solve();

    return 0;
}

