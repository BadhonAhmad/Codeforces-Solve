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
#define mod 998244353
#define N 1000000
int fact[N];
void solve(){
    string s;
    cin >> s;
    vector<int> v;
    int i,n = s.size(), ct = 0,ans1 = 0, ans2 = 0, x , y ;
    for( i = 0; i < n - 1; i++){
        ct = 1;
        if(s[i] == s[i+1]){
            while (s[i] == s[i+1] && i + 1 < n)
            {
                ct++;
                i++;
            }
            v.push_back(ct);
        }
    }
    // prnt(v);
    ct = 1;
    for(auto i : v){
        ans1 += i-1;
        ct *= i;
        ct %= mod;
    }

    ct = ct * fact[ans1];
    ct %= mod;
    cout << ans1 << ' ' << ct << '\n';
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    fact[0] = 1;
	for (int i = 1; i < N; i++){
		fact[i] = (fact[i - 1] * i) % mod;
	}
    int T=1;
    cin>>T;

    while(T--) 
solve();

    return 0;
}
