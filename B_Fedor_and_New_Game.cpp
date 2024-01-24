#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod     1000000007
vector<string> vs;
void bin(int n)
{
    string s;
    int i;
    s += '0';
    for (i = 1 << 30; i > 0; i = i / 2)
    {
        if ((n & i) != 0)
        {
            s += '1';
        }
        else
        {
            s += '0';
        }
    }
    vs.push_back(s);
  }

void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n>>m>>k;
    vector<int> v(n);
    for(i = 0; i <= m; i++){
        cin >> a;
        bin(a);
    }
    s = vs.back();
    vs.pop_back();
    for(auto it:vs){
        t = it;
        ct = 0;
        for (i = 0; i < 32; i++){
            if(s[i] != t[i])
                ct++;
            if(ct>k) break;
        }
        if(ct<=k){
            sm++;
        }
    }
    cout << sm;
    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; //cin >> t;
    while (t--) solve();
}