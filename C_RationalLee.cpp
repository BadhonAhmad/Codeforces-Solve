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
    int n, i, k;
    cin >> n >> k;
    vector <int> v(n),w(k);
    for(i = 0; i < n; i++){
        cin >> v[i];
    }

    for(i = 0; i < k; i++) cin >> w[i];
    sort(allr(v));// 9 8 7 -17 -22 
    sort(all(w));
    int a,sm1,sm2=0,j = k - 1,ans = 0, l = 0;
    for(i = 0; i < k; i++){
        a = w[i];
        sm1 = v[l++];

        if(a == 1) {
            ans += (2*sm1);
            continue;
        }
        sm2 = v[j-1+a];
        j += (a-1);
        ans += sm1 + sm2;//
    }
    cout << ans << endl;

}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) solve();

    return 0;
}
