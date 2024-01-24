#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
#define mod 998244353
#define N 1000006

void solve(){
    int n,i; cin>> n;
    string s; 
    cin>>s;
    
    for(i = 0; i < n-1; i++){
        if((s[i]=='a' && s[i+1] =='b') || (s[i] == 'b' && s[i+1] =='a')){
            yes;
            return;
        }
    }
    no;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
   // cin >> t;
    while(t--)
        solve();

    return 0;
}

