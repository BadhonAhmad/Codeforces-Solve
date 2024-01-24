#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 998244353
#define N 1000006

void solve(){
    int a, b;
    cin >> a >> b;
    if(b == 1) no;
    else{
        yes;
        cout << a <<' ' << a * b <<' '<< a * (b + 1) << '\n';
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

