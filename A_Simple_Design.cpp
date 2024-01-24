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
int m;
bool f(int k){
    int n = k; 
    int ans = 0;
    while (n)
    {
        ans += n%10;
        n/=10;
        /* code */
    }
    if(ans % m == 0) return true;
    else return false;
}
void solve(){
    int n;
    cin >> n >> m;
    while (1)
    {
        bool ok = f(n);
        if(ok){
            cout << n << endl;
            return;
        }
        n++;
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

