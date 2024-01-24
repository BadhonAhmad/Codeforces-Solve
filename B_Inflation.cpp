#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n,k, i;
    cin >> n >> k;
    vector <int> v(n+1),cum(n+1);
    for(i = 1; i <= n; i++){
        cin >> v[i];
        cum[i] = cum[i-1] + v[i];
    }   
    int inc = 0;
    int infl,totpric ,curinc,ans = 0;
    for(int i = 2; i <= n; i++){
        curinc = v[i];
        totpric = cum[i-1] + inc;

        infl = (ceil_div(curinc*100,totpric));
        
        if(infl > k)
            inc += (ceil_div((curinc * 100) - k * totpric,k));

    }
    cout << inc << endl;
    
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

