#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    string s, t;

    cin >> s >> t;
    int n = s.size(),m = t.size();
    for(int i = 0; i < n; i++){
        for(int j = 1; i+j -1 < n; j++){
            if(i + j - 1 -(m - j) < 0 || j > m) continue;
            string ss = s.substr(i,j);
            string sk = s.substr(i+j-1-(m-j),m-j);
            reverse(sk.begin(),sk.end());
            string tm;
            tm += ss;
            tm += sk;
            if(t == tm){
                yes;
                return;
            }
           
        }
    }
    no;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

