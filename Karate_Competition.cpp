#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vll vector<ll>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const ll N=2e5+10;
using namespace std;

int main()
{
    fastio;
    ll cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j, k, a, b, c, n, m;
    cin >> tc;
    cnt = 1;
    while (tc--)
    {  
        cin >> n;
        vll v(n);
        vll vv(n);
        ans = 0;
        for (size_t i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        f = 0;
        for (size_t i = 0; i < n; i++)
        {
            cin >> vv[i];
        }
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                if(v[i]>vv[j] && vv[j]>0){
                    ans += 2;
                    vv[j] = -1;
                    f = 2;
                    break;
                }
                if(v[i] == vv[j] && vv[j]>0){
                    f = 1;
                    x = j;
                }
            }
            if(f == 1){
                ans += 1;
                vv[x] = -1;
            }
        }

        cout<< "Case " << cnt++ << ": " << ans << e;

        }

    return 0;
}

