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
    int n, k;
    cin >> n >> k;
    for(int i = 0; i <= n; i++){
        int x = i;
        int j = n - x;
        int ach = (x*(x-1))/2 + ((n-x)*(n-x-1))/2;
        if(ach == k){
            yes;
            for(int k = 0; k < x; k++){
                cout << 1 << ' ';
            }
            for(int kk = 0; kk < j; kk++){
                cout << "-1 ";
            }
            cout << endl;
            return;

        }
    }
    no;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

