#include <bits/stdc++.h>
using namespace std;
long long sum(long long n){
    return (n*(n+1))/2;
}
void solve()
{
    long long n,x,y,gcd,c;
    cin>>n>>x>>y;
    long long a=(n/x);
    long long b=(n/y);
    long long lcm=(x*y)/(__gcd(x,y));
    c=(n/lcm);
    long long a1=a-c;
    long long b1=b-c;
    cout<<(sum(n)- sum(n-a1)) - sum(b1)<<endl;
    return;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}