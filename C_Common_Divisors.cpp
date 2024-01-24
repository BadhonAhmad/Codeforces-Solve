#include <bits/stdc++.h>
using namespace std;

#define vll     vector<int>
#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
const int N = 1e6 + 10;
int is_prime[N];
vector<int> prime_divisor[N];


void solve()
{
    int i,j,k,a,b,c=0,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    
    cin >> n;
    vll v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
        c = __gcd(v[i], c);
    }
    j = sqrt(c);
    for(i = 1; i*i < c; i++){
        if(c%i == 0){
            ct+=2;
        }
    }
    if(j*j == c){
        ct++;
    }
    cout << ct << e;

    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //primeGen(100000);
    //cin >> T;
    while (T--)
        solve();
    return 0;
}