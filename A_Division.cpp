#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n,i;
    cin >> n;
    for(i = 0; i < n; i++){
        int a; 
        cin >> a;
        if(a >= 1900 ){
            cout << "Division 1\n";
        }
        else if(a >= 1600 && a <= 1899){
            cout << "Division 2\n";

        }
        else if(a >= 1400 && a <= 1599){
            cout << "Division 3\n";

        }
        else cout << "Division 4\n";
    }
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    //cin >> t;

    while(t--)
        solve();

    return 0;
}

