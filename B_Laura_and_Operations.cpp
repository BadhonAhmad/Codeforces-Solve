#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if((b+c) % 2 == 0){
        cout << 1 << ' ';
    }
    else{
        cout << 0 << ' ';
    }
    if((a + c) % 2 == 0){
        cout << 1 << ' ';
    }
    else cout << 0 << ' ';
    if((a + b) % 2 == 0){
        cout << 1 << ' ';
    }
    else cout << 0 << ' ';
    cout << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

