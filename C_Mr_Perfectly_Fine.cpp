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
    int i,j,k,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;

    cin>>n;
    vector<pair<int, string>> vp(n);
    int mn1 = LONG_LONG_MAX, mn2 = LONG_LONG_MAX,tm=LONG_LONG_MAX;
    for(i = 0; i < n; i++){
        cin>>vp[i].first>>vp[i].second;
        string a;
        m = vp[i].first;
        a = vp[i].second;

        if(a[0] == '1' && a[1] == '1'){
            tm = min(tm, m);
            f = 1;
        }
    }
    sort(all(vp));
    int f1 = 0,f2=0;
    
        for(auto it:vp){
            string a;
            a = it.second;
            if(a[0] == '1' && !f1){
                f1 = 1;
                mn1 = it.first;
            }
            if(a[1] == '1' && !f2){
                f2 = 1;
                mn2 = it.first;
            }
        }
        if(f1 && f2){
            sm = mn1 + mn2;
            tm = min(tm, sm);
        }
   

    if(f || (f1 && f2))
        cout << tm << e;
    else
        cout << -1 << e;
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