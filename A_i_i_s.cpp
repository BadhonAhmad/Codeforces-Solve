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
    
    for (i = n-1; i >= 1; i-=2)
    {
        mp[i] = i;
        for(j = 1; j < i-1; j++){
            cout << i+1 << ' ' << i <<' ';
        }
         cout << i+1 << ' ';
         
    }
    for (i = 1; i < n - 1; i++)
         cout << i << ' ';
    cout << n << ' ';
    cout << n - 1;
    // for(auto it:mp){
    //      cout << it.second << e;
    // }
    return;
}

signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; //cin >> t;
    while (t--) solve();
}