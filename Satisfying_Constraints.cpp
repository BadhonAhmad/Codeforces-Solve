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
    vector<int> v1,v2,v3,v4;
    for(int i = a; i<=min(a+500,b); i++){
        int rm = i % 10;
        int sk = i;
        v1.push_back(rm);
        if(sk > 0){ 
            sk/=10;
            v2.push_back(sk % 10);
        }
    }
    for(int i = c; i <= min(c+500,d); i++){
        int rm = i % 10;
        int sk = i;
        v3.push_back(rm);
        sk /=10;
        if(sk > 0){
            v4.push_back(sk % 10);
        }
    }
    int mx = LONG_LONG_MIN;
    int f = 0;
    for(int i = 0; i<v1.size(); i++){
        for(int j = 0; j< v3.size(); j++){
            int a = v1[i];
            int b = v3[j];
            if(a + b > 0){
                f = 1;
            }
            int smm = (a + b) % 10;
            mx = max(mx, smm);
        }
    }
    for(int i = 0; i<v2.size(); i++){
        for(int j = 0; j< v4.size(); j++){
            int a = v2[i];
            int b = v4[j];
            if(a + b > 0){
                f = 1;
            }
            int smm = (a + b + f) % 10;
            int sm = (a + b) % 10;
            mx = max(mx, max(sm,smm));
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
