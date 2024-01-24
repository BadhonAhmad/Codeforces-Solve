#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, j,i;
    cin >> n;
    vector <int> v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    for(j = 0; j < n; j++){ 
        for(i = 1; i < n-1; i++){
            if(v[i-1] < v[i] && v[i] > v[i+1] ){
                swap(v[i],v[i+1]);
            }
        }
    }
    if(is_sorted(v.begin(),v.end())){
        yes;
    }
    else no;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

