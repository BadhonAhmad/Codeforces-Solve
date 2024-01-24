#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t ;
    cin >> t;
    while (t--)
    {
        int ans = 0, a, b, n;
        cin >> a >> b >> n;
        
        ans += (b );
        while (n--)
        {
            int x;
            cin >> x;
            ans += min(x , a-1);
        }
        
        cout << ans << '\n';

    }
}