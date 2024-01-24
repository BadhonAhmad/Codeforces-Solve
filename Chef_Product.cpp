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
    int n, ans = 0;
    cin >> n;
    set <int> st;//st{0};
    if(n % 2 == 0){
        int i = 2;
        int odn = 3;
        while (1)
        {
            int a =  i*i;
            if(a > n){
                break;
            }
            int rm = n - a;
            if(rm == 0){
                st.insert(i);
            }
        }
    }
    else{
        ans ++;
        int i = 3;
        int odn = 5;
        while (1)
        {
            int a = i * i;
            if(a >= n){
                break;
            }
            int rm = n - a;
            if(rm <= odn){
                break;
            }
            ans++;
            odn+=2;
            i++;
        }
    }
    cout << ans << '\n';
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) solve();

    return 0;
}
