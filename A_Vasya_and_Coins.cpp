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
    int a, b, ct = 1;
    cin >> a >> b;
    if(a > 0 && b > 0)
    cout << a + b * 2  + 1 << endl;
    else if(b == 0){
        cout << a + 1 << endl;
    }
    else cout << 1 << endl;
    
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

