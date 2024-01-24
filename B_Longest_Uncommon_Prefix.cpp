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
    cin>>n>>s;
    a=0;
    vector<int> v(n);
    for(i = 1; i <= n-1; i++){
        mx=0;
        for(k=0; k<n; k++){
             if(k+i>=n)break;
            if(s[k] != s[k+i] && k+i < n){
               mx=max(mx,k+1);
            }
            else break;
           
        }
        cout<<mx<<endl;
    }
    
    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1;// cin >> t;
    while (t--) solve();
}