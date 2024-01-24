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
    int n , m;
    cin >> n >> m;
    map <string , string> mp1,mp2;
    for(int i = 0; i < n; i++){
        string a , b;
        cin >> a >> b;
        b += ';';
        mp1[b] = a; 
    }
    for(int i = 0; i < m; i++){
        string a , b;
        cin >> a >> b;
        cout << a << " " << b << " #" << mp1[b] << endl;
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

