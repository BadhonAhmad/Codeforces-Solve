/**Everyone who is taken by death asks for more time, while 
everyone who has time makes excuses for procrastination.--Ali Ibn Abi Talib(Ra)**/
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define no cout << "NO\n"
#define endl "\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
#define N 200005

void solve(){
    int n, m, k, i, j, ct = 0, f = 0, ans,sm = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, a, b, c, d, temp;
    cin >> n;
    vector<int> v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
        sm+=v[i];
    }
    sm = 37;
    a = sqrtl(sm);
    // if(a * a == sm){
    //     yes;
    // }
    // else no;
       cout << a << endl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T=1;cin>>T;
    while(T--) solve();
    return 0;
}
