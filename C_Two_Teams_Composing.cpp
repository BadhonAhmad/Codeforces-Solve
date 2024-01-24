#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"

#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod     1000000007

void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mx=-99;
    string s,t;
    cin>>n;
    vector<int> v(n);
    map<int, int> mp;
    set<int> st;
    for(i = 0; i < n; i++){
        cin>>v[i];
        mp[v[i]]++;
        mx = max(mx,mp[v[i]]);
        st.insert(v[i]);
    }
    cout << max(min((int)mp.size() - 1, mx), min((int)mp.size(), mx - 1)) << e;

    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; cin >> t;
    while (t--) solve();
}