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
    vector<int> v(n);
    map<int, int> mp;
    for(i = 0; i < n; i++){
        cin>>v[i]; 
    }
    for(i = 0; i < n; i++){
        
        if(v[i] == 25)
            mp[25]++;
        else if(v[i] == 50){
            if(mp[25]==0){
                no;
                return;
            }
            else{
                mp[25]--;
                mp[50]++;
            }
        }
        else{
            if(mp[50] >= 1 && mp[25]>=1){
                mp[50]--;
                mp[25]--; 
            }
            else if(mp[25] >= 3){
                mp[25] -= 3;
            }
            else{
                no;
                return;
            }
        }
    }
    yes;

    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; //cin >> t;
    while (t--) solve();
}