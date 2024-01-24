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
//handle the corner cases
void solve()
{
    int i,j,k,a,b,c,d,x,y,z,ans=0,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n;
    vector<int> v(n);
    map <int, int> mp;
    for(i = 0; i < n; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    j = n-1;
    if(mp[v[0]] == n){
        cout << 0 << ' ' << (n * (n - 1)) / 2;
        return;
    }
    sort(all(v));
    mx = v[n - 1] - v[0];
    if(n == 2){
        cout << mx << ' '<< 1 << e;
        return;
    }
    for(i = 0; i < j; ){
        if(v[j]-v[i] == mx)
            ct+=(mp[v[i]]*mp[v[j]]),mp.erase(v[j]),mp.erase(mp[v[i]]), i++;
        else if(v[j]-v[i]>mx)
            j--;
        else break;
    }
    cout << mx << ' ' << ct << e;
    return;//1 1 2 3 3
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1;// cin >> t;
    while (t--) solve();
}