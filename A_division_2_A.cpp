#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
int32_t main()
{
    int n, m;
    while (scanf("%lld%lld",&n,&m)!= EOF )
    {
        int ans = 0;
        if(n ==1 && m==1){
            ans = 0;
        }
        else if(n == 1 || m == 1){
            ans = max(n, m) - 1;
        }
        else{
            int slit = max(n,m);
            ans += max(n, m) - 1;
            ans += slit * (min(n, m) - 1);
        }
        cout << ans << endl;
    }
    
}