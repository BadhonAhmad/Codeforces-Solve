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
    string s, t;
    int n, k; cin >> n >> k;
    cin >> s >> t;
    int z = 0, o = 0;
    int z1 = 0, o1 = 0,zo=0,oz=0;
    int kol =0;
    for(int i  = 0 ; i < n-1; i++){
        if(s[i] == '0' && s[i+1] == '0') z = 1;
        if(s[i] == '1' && s[i+1] == '1') o = 1;
    }
    
        if(t[0] == '0' && t[k-1] == '0') z1 = 1;
        if(t[0] == '1' && t[k-1] == '1') o1 = 1;
        if(t[0] == '0' && t[k-1] == '1') zo = 1;
        if(t[0] == '1' && t[k-1] == '0')oz =1;
    for(int i = 0;  i < k-1; i++ ){
        if(t[i] == t[i+1]) kol =1;
    }
    
    if(z && o) no;
    else if( !z && !o) yes;
    else if(kol) no;
    else if(z && !o){
        if(o1) yes;
        else no;    
    }
    else if(!z && o){
        if(z1) yes;
        else no;
        
    }
    else yes;
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

