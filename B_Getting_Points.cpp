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
    int n, p, l, t;
    cin >> n >> p >> l >> t;

    if(n == 1){
        cout << "0\n";
        return;
    }

    int wek = (ceil_div(n,7)), taskerdin,wehavemxp;
    if(wek % 2)
        wehavemxp = (2 * t + l) * (wek/2) + t + l;
    else{
        wehavemxp = (2 * t + l) * (wek/2);
    }
    
   //db(wehavemxp);
   //db(wek);
    if(wehavemxp == p){
        cout << n - ceil_div(wek,2) << '\n';
        return;
    }

    if(wehavemxp < p){
        p -= wehavemxp;
        n -= ceil_div(wek, 2);
        n -= ceil_div(p,l);
        cout << max(0ll,n) << '\n';
    }
    else{
        int koidin = ceil_div(p, 2 * t + l);
        cout << n-koidin << '\n';
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
