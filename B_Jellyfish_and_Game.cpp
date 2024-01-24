#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int je[n], ge[m];
        
        for(int i = 0 ; i < n; i ++){
            cin >> je[i];
        }
        sort(je, je + n);
        for(int i = 0 ; i < m; i ++){
            cin >> ge[i];
        }
        sort(ge, ge + m);
        if(je[0] < ge[m - 1]) swap(je[0],ge[m - 1]);
        sort(je, je + n);
        sort(ge, ge + m);
        
        if(k % 2 == 0){// if k is even
            if(ge[0] < je[n - 1]) swap(ge[0], je[n - 1]);
        } 

        int ans = 0;
        for(int i = 0; i < n; i++){
            ans += je[i];
        }

        cout << ans << '\n';
    }
}