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

    while (1)
    {
        int k = n;
        int one= k % 10;
        k/=10;
        int ten = k % 10;
        k/=10;
        int hund= k % 10;
        k/=10;
        if(one == ten * hund ) {
            cout << n ;
            break;
        } 
        n++;
        
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while(t--)
        solve();

    return 0;
}

