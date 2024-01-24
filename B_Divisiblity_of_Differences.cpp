#include <bits/stdc++.h>
using namespace std;

#define vll     vector<int>
#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"Yes\n"
#define no      cout<<"No\n"


void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n >> k >> m;
    vector<int> v(n),an;
    map<int, int> mp, pm;

    for(i = 0; i < n; i++){
        cin>>v[i];
        b=v[i] % m;
        mp[b]++;
    }
    for(auto it:mp){
        if(it.second>=k){
            f = 1;
            a = it.first;
            break;
        }
    }
    if(f){
        yes;
        for(i = 0; i < n; i++){
            if(v[i]%m == a){
                cout << v[i] << ' ';
                ct++;
            }
            if(ct == k){
                break;
            }
        }
    }
    else
        no;
    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
        solve();
    return 0;
}