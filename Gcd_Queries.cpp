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
int gcd(int a, int b){
  if(a < b) swap(a, b);
  if(b == 0) return a;
  return gcd(b, a % b);
}
void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n >> m;
    vector<int> v(n+1),pref(n+2),suf(n+2);
    for(i = 1; i <= n; i++){
        cin>>v[i]; 
    }
    a = 0;
    for (i = 1; i <= n; i++){
        a = gcd(a, v[i]);
        pref[i] = a;
    }
    a = 0;
    for (i = n ; i > 0; i--){
        a = gcd(v[i], a);
        suf[i] = a;
    }
    while (m--)
    {
        cin >> b >> c;
        int now = 0;
        now = gcd(pref[b - 1], now);
        now = gcd(suf[c+1],now);
        cout << now << e;
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