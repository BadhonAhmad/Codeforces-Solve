/*****from dust i have come, dust i will be*****/
#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"Yes\n"
#define no      cout<<"No\n"
#define mod     1000000007

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i,j,k,a,b,c,d,x,y,z,ans=0,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>s;
    n = s.size();
    a = 0;
    vector<int> v;
    int od = 0, ev = 0;
    bool ok1 = false;
    for(i = 0; i < n; i++){
        if(s[i] == 'R' || s[i] == 'K'){
            t += s[i];
        }
        if(s[i] == 'B'){
            if((i+1)%2)
                od++;
            else
                ev++;
        }
    }
    if(t == "RKR")
        ok1 = true;
   // cout << ok1 << "od" << e;
    if(ok1 && od == ev && od==1){
        yes;
    }
    else
        no;

    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; //cin >> t;
    while (t--) solve();
}