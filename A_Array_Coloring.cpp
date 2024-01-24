#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod     1000000007

void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n;
    vector<int> v(n);
    for(i = 0; i < n; i++){
        cin>>v[i];
        sm += v[i];
    }
    for(i = 0; i < n; i++){
        if(v[i]%2 == 0 && (sm-v[i])%2 == 0){
            yes;
            return;
        }
        if(v[i]%2 == 1 && (sm-v[i])%2 == 1){
            yes;
            return;
        }
        
    }
    no;

        return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; cin >> t;
    while (t--) solve();
}