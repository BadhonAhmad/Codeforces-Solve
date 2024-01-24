#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t --){
        int L , v1 , v2;
        cin >> L >> v1 >> v2;
        int ans = -1;
        for(int i = 0 ; i <= L ; i ++){
            int x = v1*i;
            if(x > L) break;
            int tx = (L - x + v1 - 1) / v1 , ty = (L + v2 - 1) / v2;
            if(ty < tx) ans = i;
        }

        cout<<ans<<"\n";
    }
    
}