/**Everyone who is taken by death asks for more time, while 
everyone who has time makes excuses for procrastination.
--Ali Ibn Abi Talib(Ra)**/


#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define sj size()
#define no cout << "NO\n"
#define prnt(v) for(auto it : v) cout<<it<<" ";cout<<"\n";
#define deb(x) cout << #x << " = " << x << " , " << '\n';
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define endl "\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, i;
    cin >> n;
    vector <int> v(n+1),cum(n+1);
    for(i = 1; i <= n; i++){
        cin >> v[i];
    }

    sort(all(v));

    for(i = 1; i <= n; i++){
        cum[i] = cum[i-1] + v[i];
    }
    int mx,mx1, a, rq , b, sm;
    for(i = 1; i <= n; i++){
       mx = *max_element(v.begin(),v.begin()+i);
       mx1 = *max_element(v.begin()+i+1,v.end());
       mx = max(mx,mx1);
       rq = mx * (n-1);
       

    }
    int a = ceil_div(cum[n] , (n-1));
    int req = a * (n-1);
    deb(req);
    a = req - cum[n];
    deb(a);
    //cout << a << endl;

    

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) solve();

    return 0;
}
