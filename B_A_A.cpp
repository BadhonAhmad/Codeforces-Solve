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
    int n; 
    cin>>n;
    for(int i = 1; i <= 20; i++){
        // int tm = pow(i,i);
        int tm = 1;
        for(int j = 1; j<=i; j++){
            tm *= i;
        }
       if(tm == n){
        cout << i ;return;
       }
    }
    cout << -1 ;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
   // cin >> t;
    while(t--)
        solve();

    return 0;
}

