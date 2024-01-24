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
#define prnt(v) for(auto it : v) cout<<it<<" ";cout<<endl;
#define deb(x) cout << #x << " = " << x << " , " << '\n';
#define endl "\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
void player1(){
    cout << "Ashishgup\n";
}
void player2(){
    cout << "FastestFinger\n";
}

int checkPrime(int n){
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

void solve(){
    int n, m, k, i, j, ct = 0, f = 0, ans = 0, sm = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, a, b, c, d;
    cin >> n;
    f = (n == 1);
    if(n > 2 && n % 2 == 0){
        if((n&(n-1)) == 0){
            f = 1;
        }
        else if(n % 4 != 0 && checkPrime(n/2)) f = 1;
    }
    if(f == 0){
        player1();
    }
    else player2();
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) solve();
    return 0;
}
