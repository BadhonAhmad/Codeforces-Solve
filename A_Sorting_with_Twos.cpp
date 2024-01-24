#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 998244353
#define N 1000006

void solve(){
    int n,i; 
    cin >> n; 
    vector<int> v(n+1),vv(n+1),id1,id2;
    for(i = 1; i <= n; i++){
        cin >> v[i];
    }
    
    if(v == vv){
        yes;
        return;
    }
    int id = -1;
    for(int j = n; j > 1; j--){
        if(v[j] < v[j - 1]){
            id=j-1;
            break;
        } 
    }
    // int f = 0;
    // for(int i = 0; i <= 20; i++){
    //     int a = pow(2, i);
    //     if(a == id && a <= n){
    //         f = 1;
    //         break;
    //     }
    // }
    // for(int i = 1; i <= id; i++) {id1.pb(v[i]);id2.pb(v[i]);}
    // sort(all(id1));
    // if(id1 == id2 && f == 1) yes;
    if(id <= 4 || id == -1) yes;
    else no;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}