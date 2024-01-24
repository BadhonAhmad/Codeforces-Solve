#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 998244353
#define N 1000006

void solve(){
    int n; cin >> n;
    int m ; cin >> m;
    int ar[n][m];
    set<int> ale;
    for(int i = 0; i < n; i++){
        for(int j  = 0; j < m; j++){
            int x ; cin >> x;
            ar[i][j] = x;
            ale.insert(x);
        }
    }
    int mx = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int k = 0; k < i; k++)
        set<int> s;
        for(int kk = 0; kk < n; kk++){
            
        }
        for(int j  = 0; j < k; j++){
            s.insert(ar[i][j]);
        }
        if(ale != s){
            mx= max(mx,(int)s.size());
        }
    }
    cout << mx << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

