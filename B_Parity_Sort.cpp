#include <bits/stdc++.h>
using namespace std;
#define int long long

#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"


void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n;
    vector<int> v(n),vv(n);
    int od = 0, ev = 0;
    for(i = 0; i < n; i++){
        cin>>v[i];
        vv[i] = v[i];
    }
    sort(v.begin(), v.end());
    for(i = 0; i < n; i++){
        if(v[i]%2 == 0&& vv[i]%2){
            no;
            return;
        }else if(v[i]%2 && vv[i]%2 == 0){
            no;
            return;
        }
        
    }
    yes;
    
    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}