#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ld long double
#define vll vector<ll>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const ll N=1e5+10;
using namespace std;

int main()
{
    fastio;
    int tc;
    ll cnt = 0, f = 0, sum = 0, ans = 0, t,x, y, z, i, j, k, a, b, c, n, m;
    string s,s1,s2;
    cin >> tc;
    while (tc--)
    {
       
        j =LONG_LONG_MAX;//9999
        k = LONG_LONG_MIN;//-11111
        cin >> n;//6 8
        vll v(n);
        for ( i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ans = 0;
        for (ll bit = 0; bit < 13; bit++)
        {
            bool one = false, zero = false;
            for ( i = 0; i < n; i++)
            {
                bitset<13> bi(v[i]);
                one |= (bi[bit]  == 1);
                zero |= (bi[bit] == 0);
            }
            if(one && zero){
                ans += (1ll <<(ll) bit);
            }
        }
        cout << ans << e;
    }
    return 0;
}

