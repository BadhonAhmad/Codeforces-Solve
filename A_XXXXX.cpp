#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int N=2e5+10;
using namespace std;
/**********************************************************************/
int32_t main()
{
    fastio;
    int cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j,cs, k, a, b, c, n, m;
    cin >> tc;
    cs=1;
    while (tc--)
    {  
        cin >> n >> m;
        vll v(n);
        sum = 0, ans = -1;
        for (size_t i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] %= m;
            sum += v[i];
        }
        sum %= m;
        if(sum != 0){
            cout << n << e;
            continue;
        }
        x = 0;
        while (x<n && v[x] == 0)
        {
            x++;
        }
        if(x == n) {
            cout << -1 << e;
            continue;
        }
        y = n - 1;
        while (v[y] == 0)
            y--;
        ans = max(n - x - 1, y);

        cout << ans << e;
        
    }
    return 0;
}

