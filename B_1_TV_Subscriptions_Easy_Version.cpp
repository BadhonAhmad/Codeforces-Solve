/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long int
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
const int N = 1e6 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/
int ct = 0;
int fr[N];
//map<int, int> mp;
void add(int x){
    if(fr[x] == 0)
        ct++;
    fr[x]++;
}
void rem(int x){
    fr[x]--;
    if(fr[x] == 0)
        ct--;
}
void solve()
{
    int i,j,k,a,b,c,d,sm=0,n,m,f=0,mn=d,mx=LONG_LONG_MIN;
    string s,t;

    ct = 0;
    //mp.clear();
    cin>>n >> k>> d;
    vector<int> v(n);
    for(i = 0; i < n; i++){
        cin>>v[i]; 
    }

    for (i = 0; i < d; i++){
        add(v[i]);
    }

    mn = ct;

    for (i = d; i < n; i++){
        add(v[i]);
        rem(v[i - d]);
        mn = min(ct, mn);
    }

    cout << mn << e;
    for (i = 0; i < n; i++){
        fr[v[i]] = 0;
    }
    
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