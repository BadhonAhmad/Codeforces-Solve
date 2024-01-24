/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long int
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
const int N = 1e5 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i,j,k,a,b,d,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n>>m>>d;
    vector<int> v(n+1),cum(n+1);
    vector<pair<pair<int, int>, int>> vp(m+1);
    for(i = 1; i <= n; i++){
        cin>>v[i];
        cum[i] = cum[i - 1] + v[i];
    }
    for (i = 1; i <= m; i++){
        cin >> vp[i].first.first >> vp[i].first.second >> vp[i].second;
    }
    for (i = 0; i < d;i++){
        cin >> a >> b;
    }
    
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