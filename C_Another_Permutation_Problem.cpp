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
    int i,j,k,a,b,c,d,x,y,z,ans=0,sm=0,ct=0,n,m,f=0,mxa=LONG_LONG_MIN,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n;
    vector<int> v(n+1);
    for(i = 1; i <= n; i++){
        sm = 0;
        for(j = 1; j < i; j++){
            v[j] = j;
        }
        ct = i;
        for(j = n; j >= i; j--){
            v[ct++] = j;
        }
        for(j = 1; j <= n; j++){
            mx = max(mx, v[j] * j);
            sm += v[j] * j;
        }
        mxa = max(mxa, sm - mx);
        // for(auto it:v){
        //     cout << it << ' ';
        // }
        
    }
    cout << mxa << e;
    
    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; cin >> t;
    while (t--) solve();
}