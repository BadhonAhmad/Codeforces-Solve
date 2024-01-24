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
        cin >> n >>c;
        vll v(n), vv(n);
       // vector<pair<int, int>> v;
        for (size_t i = 0; i < n; i++)
        {
            cin >> x;
           // v.push_back({(x+i+1),(x+n-i)});
            v[i] = x + i ;
            vv[i] = x + n + 1 - i;
        }
        sort(all(v));
        sort(all(vv));
        // for (size_t i = 0; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << e;
        // for (size_t i = 0; i < n; i++)
        // {
        //     cout << vv[i] << " ";
        // }
        // cout << e;

        cnt = 0;
        x = 0;
        for (i = 0; i < n; i++)
        { // 13-5=8
             c -= min(v[i],vv[i]);
            if(c >= 0){
                cnt++;
            }
            else break;
        }

        cout << cnt << e;
    }
    return 0;
}

