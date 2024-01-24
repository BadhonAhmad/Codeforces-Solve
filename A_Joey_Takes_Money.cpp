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
    while (tc--)
    {  
        cin >> n;
        vll v(n);
        ans=0;
        for (size_t i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        reverse(all(v));
        // for (size_t i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << e;

        for (size_t i = 1; i < n; i++)
        {
            x = v[0] * v[i];
            v[0] = x;
            v[i] = 1;
            
        }
        for (size_t i = 0; i < v.size(); i++)
        {
            ans += v[i];
        }
      
        cout << ans * 2022 << e;
    }
    return 0;
}

