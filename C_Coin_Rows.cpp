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
    vector<int>maxi,mini;
    int v[3][n+1];
    for(i = 0; i <= 2; i++){
        for(j = 0; j <= n; j++){
            v[i][j]=0;
        }
    }
    for(i = 1; i <= 2; i++){
        for(j = 1; j <= n; j++){
            cin>>a;
            v[i][j]=a;
        }
    }
    for(i = 1; i <= 2; i++){
        for(j = 1; j <= n; j++){
            v[i][j]+=v[i][j-1];
        }
    }

    for(i=1; i<=n; i++){
        sm=v[1][i]+v[2][n]-v[2][i-1];
        maxi.pb(sm);
        f=max(v[1][n]-v[1][i],v[2][i-1]);
        mini.pb(f);
    }
    a=*(min_element(mini.begin(),mini.end()));
    cout<<a<<e;





    // for(i = 1; i <= 2; i++){
    //     for(j = 1; j <= n; j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<e;
    // }
    
    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; cin >> t;
    while (t--) solve();
}