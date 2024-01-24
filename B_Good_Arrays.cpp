#include <bits/stdc++.h>
using namespace std;


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
    if(n == 1){
        no;
        return;
    }

    for(i = 0; i < n; i++){
        if(v[i] != 1){
            f += 1;
        }
        else {
            f += 2;
        }
    }
    if(f > sm)
        no;
    else 
        yes;
   
    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--) solve();
}