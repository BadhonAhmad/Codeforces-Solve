#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
#define int             long long 
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod     1000000007

bool isPrime(int n) 
{
    // Corner case 
    if (n <= 1) 
        return false; 

    // Check from 2 to n-1 
    for (int i = 2; i*i <= n; i++) 
        if (n % i == 0) 
            return false; 

    return true; 
} 

void solve()
{

    int n,ct=0;
    cin >> n;
    if(isPrime(n)==true){
        cout << 1;
    }
    else{
        if(n%2 == 0){
            cout << 2 << e;
        }
        else{
            if(isPrime(n-2)){
                cout << 2;
            }
            else{
                cout << 3;
            }
        }
    }
    
    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
        solve();
    return 0;
}