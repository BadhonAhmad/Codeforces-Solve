#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n ,ans= 0;
    cin >> n;
    for(int i = 1; i <= n - 1; i++) {
        int x;
        cin>> x;
        if(x < 0) ans+= abs(x);
        else ans+= (-x);
    }
    cout << ans << endl;
    
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

