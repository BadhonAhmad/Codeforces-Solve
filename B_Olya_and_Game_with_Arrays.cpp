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
    vector<int> v(n),vk[n],mini,omo;
    vector <pair <int, int> > vp;
    for(i = 0; i < n; i++){
        cin >> v[i];
        for(j = 0; j < v[i]; j++){
            cin >> a;
            vk[i].pb(a);
        }
        sort(all(vk[i]));
        vp.push_back({ vk[i][1],vk[i][0]});
    }
    sort(all(vp));
    reverse(all(vp));
    ct = 1;
    for(auto it:vp){
        if(ct<n){
            omo.pb(it.second);
            sm += it.first;
        }
        else{
            omo.push_back(it.second);
            sm += *min_element(omo.begin(), omo.end());
        }
        ct++;
        // //cout << it.first << ' ' << it.second << e;
        // if(ct==1){
        //     b = it.second;//chuto
        //     a = it.first;//boro
        //     ct++;
        //     omo.push_back(b);
        //     continue;
        // }
        // if(ct == n){
        //     c = it.first;//boro
        //     d = it.second;//choto
        //     if(b<d){
        //         sm += (b + a);
        //     }
        //     else{
        //         sm += (d + a);
        //     }
        // }
        // else 
        // sm += it.first;
        
        // ct++;
    }
    // if(n == 1)
    //     cout << b << e;
    // else
    cout << sm << e;
    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; cin >> t;
    while (t--) solve();
}