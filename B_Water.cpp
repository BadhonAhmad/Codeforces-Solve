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
    int a, b, c ,d;
    cin >> a >> b >> c >> d;
    int sm1 = a, sm2 = b;
    vector<int> v1,v2;
    for(int i = a; i<=min(a+11,b); i++){
        int rm = i % 10;
        v1.push_back(rm);
    }
    for(int i = c; i <= min(c+11,d); i++){
        int rm = i % 10;
        v2.push_back(rm);
    }
    int mx = LONG_LONG_MIN;
    for(int i = 0; i<v1.size(); i++){
        for(int j = 0; j< v2.size(); j++){
            int a = v1[i];
            int b = v2[j];
            int smm = (a + b) % 10;
            mx = max(mx, smm);
        }
    }
    // prnt(v1);
    // prnt(v2);
    cout << mx << '\n';
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
