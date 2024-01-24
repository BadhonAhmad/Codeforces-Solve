#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int i, n, k ;
    cin >> n >> k;
    vector<int > vv(n), v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
        vv[i] = v[i];
    }
    sort(all(vv));
    if(is_sorted(v.begin(),v.end())){
            yes;
    }
    else{
            for(i = 0; i < n; i++){
                if(vv[i] != v[i]){
                    if(i + k >= n && i - k < 0){
                        no;
                        return;
                    }
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

