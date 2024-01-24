#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
ll ceil_div(ll a, ll b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    multiset<pair<int,string>>st;
    st.insert({3,"Ba"});
    st.insert({3,"Aa"});
    for(auto i : st){
        cout << i.first  << ' ' << i.second << endl;
    }
}

int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);

    int t = 1;
    //cin >> t;

    while(t--)
        solve();

    return 0;
}

