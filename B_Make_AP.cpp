#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define N 1000006
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int a, b, c;
    cin >> a >> b >> c;

    int df = b - (c - b);
    if(df >= a && df % a == 0 && df != 0) {
        yes;
        return;
    }

    df = a + (c - a)/2;
    if(df >= b && (c-a) % 2 == 0 && df % b == 0 && df != 0) {
        yes;
        return;
    }

    df = a + 2*(b - a);
    if(df >= c && df % c == 0 && df != 0) {
        yes;
        return;
    }
    no;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

