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
    string s; cin >> s;
    char ch; cin >> ch;
    int f =0;
    for(int i = 1; i <= s.size(); i++){
        if(s[i-1] == ch && i%2 == 1) f=1;
    }
    if(f) yes;
    else no;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

