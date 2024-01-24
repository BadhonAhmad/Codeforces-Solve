/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long int
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
const int N = 1e6 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/
int prime_divisor[N];
void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n >>m;
    if(n == 1|| m<prime_divisor[n]){
        yes;
    }else
        no;
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 2; i < N; i++){
        if(prime_divisor[i] == 0){
            for (int j = i; j <= N; j+=i){
                if(prime_divisor[j] == 0) prime_divisor[j] = i;
            }
        }
    }
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}