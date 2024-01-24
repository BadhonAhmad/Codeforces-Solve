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
    int i,j,k,a,b,c,sm=0,od=0,ev=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n;
    vector<int> v(n);
    map<int, int> mp;
    for(i = 0; i < n; i++){
        cin>>v[i];
        mp[v[i]]++;
        if(v[i]%2 == 0){
            ev++;
        }
        else
            od++;
    }
    
    if(ev == n || od == n){
        yes;
    }
    else if(ev % 2 == 0 && od % 2 == 0)
        yes;
    else {
        for(auto it:v){
            if(it%2){
                if(mp.find(it-1) != mp.end() || mp.find(it+1)!= mp.end()){
                    yes;
                    return;
                }
            }
        }
         no;
    }
   

    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; cin >> t;
    while (t--) solve();
}