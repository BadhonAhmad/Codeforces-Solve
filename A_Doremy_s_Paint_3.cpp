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
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 998244353
#define N 1000006

void solve(){
    int n; cin >> n;
    set <int> st;//st{0};
    map <int, int> mp;
    for(int i = 0; i < n; i++){
        int x; 
        cin >> x;
        st.insert(x);
        mp[x]++;
    }
    int a = st.size();
    if(n <= 3){
        if(a <= 2){
            yes;
        }
        else no;
    }
    else{
        if(a == 1) {yes;return;}
        else if(a == 2) {
            // if(mp[*st.begin()] == mp[*st.end()]){yes;cout <<"HI"<<endl;return;}
            int a = *st.begin();
            st.erase(st.begin());
            // cout << a << "HI" << endl;
            int b =*st.begin();
            if(mp[a] == mp[b] && n % 2 == 0){
                yes;
                return;
            }
            else if((mp[a] + 1 ==mp[b]) || (mp[a] == mp[b]+1)){
                yes;
                return;
            }
        }
        no;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

