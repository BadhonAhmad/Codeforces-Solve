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
        cin >> n;
        vll v(n);
        vll vv(n);
        f = 0;
        cnt = 0;
        
        for ( i = 0; i < n; i++)
        {
            cin >> v[i];
            
        }
        if(v[0] == 2)
            vv[0] = 1;
        for (size_t i = 1; i < n; i++)
        {
            if(v[i] == 2){
                vv[i]+= vv[i - 1] + 1;
            }
            else
                vv[i] += vv[i - 1];
        }
        // for(auto it:vv){
        //     cout << it << ' ';
        // }
        // cout << e;

        for ( i = 0; i < n-1; i++)
        {
            if(vv[i] == vv[n-1]-vv[i]){
                f = 1;
                ans = i + 1;
                break;
            }
        }
        if(f)
            cout << ans << e;
        else
            cout << -1 << e;
    }
    return 0;
}

