#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int f = 0,ev = 0,od = 0, n, i;
    cin >> n;
    vector <int> v(n+1);
    for(i = 1; i <= n; i++){
        cin >> v[i];
        if(v[i] % 2 ) od++;
        else ev++;
    }
    if(od == n || ev == n){
        yes;
        return;
    }
    if(v[1]%2){
        for(int i = 2; i <= n; i++){
            if(v[i] % 2 == 0 && i % 2){
                no;
                return;
            }
            if(v[i] % 2 && i % 2 == 0){
                no;
                return;
            }
        }
        yes;
    }
    else{
        for(int i = 2; i <= n; i++){
            if(v[i] % 2 == 0 && i % 2 == 0){
                no;
                return;
            }
            if(v[i] % 2 && i % 2 ){
                no;
                return;
            }
        }
        yes;
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

