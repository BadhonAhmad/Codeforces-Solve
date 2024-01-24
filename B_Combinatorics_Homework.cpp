#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
#define int             long long 
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define ClearBit(x,k)   (x &= ~(1LL<<k))
const int N = 1e5 + 10;


void solve()
{
    int a, b, c, m;
    cin >> a >> b >> c >> m;
    if(m == 0){
        cout << "yes\n";
    }
    else{
        --a;
        
        --b;
        
        --c;

        if(m == a){
            m = a = 0;
            if(b == c){
                 cout << "yes\n";
            }
             else if((!c && b == 1) ||(!b && c == 1)) cout << "yes\n";
            else{
                 cout << "no\n";
            }
        }    
        else if(m == b){
            m = b = 0;
            if(a == c) cout << "yes\n";
             else if((!a && c == 1) ||(!c && a == 1)) cout << "yes\n";
            else cout << "no\n";
        }
        else if(m == c){
            m = c = 0;
            if(a == b) cout << "yes\n";
            else if((!a && b == 1) ||(!b && a == 1)) cout << "yes\n";
            else
                 cout << "No\n";
        }
        else {
            --a, --b, --c;
            int sm = a + b + c;
            if(sm == m)
                 cout << "yes\n";
            else 
            cout << "no\n";
        }
    }
    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}