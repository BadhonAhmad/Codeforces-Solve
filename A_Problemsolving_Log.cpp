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
    int n,ans = 0;
    cin >> n;
    string s;
    cin >> s;
    map <char, int> mp;
    for(auto c : s) mp[c]++;
    int ct = 1;
    for(char i = 'A'; i <= 'Z'; i++){
        if(mp[i] >= ct){
            ans ++;
        }
        ct++;
    }
    cout << ans << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

