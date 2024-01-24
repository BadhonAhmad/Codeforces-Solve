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
    string s;
    cin >> s;

    int ans = 0;
    
    int ar[4];
    for(int i= 0; i< 4; i++){
        if(s[i] == '0'){
            ar[i] = 10;
        }
        else{
            ar[i] = s[i] - '0';
        }
    }
    ans+=ar[0];
    for(int i = 1; i< 4 ; i++){
        ans += abs(ar[i]-ar[i-1]) + 1;
    }
    cout << ans << nn;
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

