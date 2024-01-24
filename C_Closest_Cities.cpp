/**Everyone who is taken by death asks for more time, while 
everyone who has time makes excuses for procrastination.
--Ali Ibn Abi Talib(Ra)**/


#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define no cout << "NO\n"
#define prnt(v) for(auto it : v) cout<<it<<" ";cout<<"\n";
#define db(x) cout << #x << " = " << x << " , " << '\n';
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, i;
    cin >> n;
    vector <int> v(n+1),pref(n+1),suff(n+2);
    for(i = 1; i <= n; i++){
        cin >> v[i];
        
    }
    for(i = 1; i < n; i++){
        if(i == 1)
            pref[i+1] = 1;
        else 
        {
            int a = v[i] - v[i-1];
            int b = v[i + 1] - v[i];
            if(a < b)
                pref[i+1] = pref[i] + b; 
            else pref[i+1] = pref[i] + 1;
        }
        
    }

    for(int i = n; i > 1; i--){
        if(i == n){
            suff[i-1]++;
        }
        else{
            int a = v[i] - v[i-1];
            int b = v[i+1] - v[i];
            if(a < b ){
                suff[i-1] = suff[i] + 1;
            }
            else{
                suff[i-1] = suff[i] + a;
            }
        }
    }
    //reverse(all(suff));
    //prnt(pref);
    // for(int i = 1; i <= n; i++){
    //     cout << suff[i] << ' ';
    // }
    // cout << '\n';

    int q ;
    cin >> q;
    for(i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        if(a < b){
            cout << pref[b] - pref[a] << '\n';
        }   
        else{
            cout << suff[b] - suff[a] << '\n';
        }
    }
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) 
solve();

    return 0;
}
