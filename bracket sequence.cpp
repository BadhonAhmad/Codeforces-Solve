/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long int
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
const int N = 1e5 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin >> n;
    if(n == 1){
        cout << -1 << e;
    }
    else if(n == 2){
        cout << 1 << ' ' << 1 << ' ' << 1 << e;
    }
    else if(n <= 1000000){
        n--;
        cout << 1 << ' ' << n << ' ' << 1 << e;
    }
    else{
        if(n%2 == 0){
            n -= 2;
            f = 1;
        }
        else{
            sm = 1;
            n--;
        }
        for (j = 1000000; j < n; j++){
            if(n%j == 0){
                if(f)
                cout << n / j << ' ' << j << ' ' << 2 << e;
                if(sm)
                cout << n / j << ' ' << j << ' ' << 1 << e;
                return;
            }
        }
        cout << -1 << e;
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