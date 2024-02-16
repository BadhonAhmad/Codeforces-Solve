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
    int n, m, k, i, j, ct = 0, f = 0, ans = 0, sm = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, a, b, c, d;
    cin >> n;
    map <int, int> mp;
    vector<int> an;
    // cout << n << ' ';
    an.push_back(n);
    if(n % 2){
        for(i = n- 2; i > 1; i-=2){
            if(n % i == 0){
                an.push_back(n-i);
                break;
            }
        }
    }
    while (n > 2)
    {   
        for(i = n - 2; i > 1; i -= 2){
            if(n % i == 0 && mp[i] < 2){
                // cout << n - i << ' ';
                an.push_back(n-i);
                mp[i]++;
                n -= i;
                break;
            }
            else{
                
            }
        }
        
    }
    if(n  == 2){
        n--;
    }
    // cout << n << '\n';
    an.push_back(n);
    cout << an.size() << '\n';
    prnt(an);
    
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
