#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, i;
    cin >> n;
    vector <int> v(n) , ans;
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    int prev = 0;
    for(i = 0; i < n; i++){
        int a = prev & (~v[i]);
        ans.push_back(a);
        prev = a ^ v[i];
    }
    for(auto i : ans) cout << i <<  " " ;
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

