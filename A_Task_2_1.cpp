#include <bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(ll a, ll b){
    while (b)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}

//to avoid overflow efficient lc
ll lcm(ll a,ll b){
    return (a/gcd(a,b))*b;//2000000000000000000->2e18
}
int main()
{
    ll n, m, l, ans, r;
    cin >> n >> m >> l >> r;
    ll lc = lcm(n, m);
    ans = (r/lc) - ((l-1)/lc);
    cout << ans ; 
}