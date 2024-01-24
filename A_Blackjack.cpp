#include <bits/stdc++.h>
using namespace std;

#define int long long


void solve(){
    int n, i;
    cin >> n;
    vector <int> v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    if(n == 1){
        cout << 0 << endl;
        return; 
    }
    cout << n/2  << endl;
    for(i = 1; i < n; i+=2){
        cout << i <<' ' << i + 1 <<' '<< min(v[i],v[i-1])<< ' '<< 1000000007 << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

