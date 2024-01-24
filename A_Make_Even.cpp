#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n; 
    cin >> n;
    if(n % 2 == 0)
    {
        cout << 0 << endl;
    }
    else{
        int k = n, rem,f  = 0 ;
        while (k)
        {
            rem = k % 10;
            k /= 10;
            if(k < 10 && k > 0){
                if(k % 2 == 0){
                    cout << 1 << endl;
                    return;
                }
            }
            if(rem % 2 == 0){
                f = 1;
            }
            
        }
        if ( !f){
            cout << -1 << endl;
        }
        else{
            cout << 2 << endl;
        }
        
    }
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

