/*****from dust i have come, dust i will be*****/
#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod     1000000007

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i,j,k,a,b,c,d,x,y,z,ans=0,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n;
    vector<int> v(n + 1), vv(n + 1);
    for(i = 1; i <= n; i++){
        cin>>v[i];
        vv[i] = v[i];
        v[i] += v[i - 1];
    }

    sort(all(vv));
    cin >> a;
    for(i = 1; i <= n; i++){
        vv[i] += vv[i - 1];
    }
    while (a--)
    {
        cin >> b >> c >> d;
        if(b==1){
            cout << v[d] - v[c - 1] << e;
        }
        else{
            cout << vv[d] - vv[c - 1] << e;
        }
    }
    

    return;
}
     
signed main(){
    cin.tie(0) -> sync_with_stdio(0);
    int t=1;// cin >> t;
    while (t--) solve();
}