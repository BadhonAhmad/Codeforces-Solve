#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ld long double
#define vll vector<ll>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e endl
#define yes cout << "YES" << endl
#define cy cout << "Case " << i << ": Yes" << endl
#define cn cout << "Case " << i << ": No" << endl
#define no cout << "NO" << endl
using namespace std;

int main()
{
    fastio;
    ll cnt = 0, f = 0, sum = 0, ans = 0, t, x, y, z, i, j, k, a, b, c, n, m;
    string s1, s2;

    cin >> t;
    for (j = 1; j <= t; j++)
    {
        f = 0;
         cin >> x;
        vll v;
        ll vv[x];
        ll vvv[x];

        for ( i = 0; i < x; i++)
        {
            cin >> y;
            v.pb(y);
            vv[i]=i;
            vvv[i] = x - i - 1;
        }
        for (i = 0; i < x; i++)
        {
            cout << vvv[i] << " ";
        }

        cout << e;
         for (i = 0; i < x; i++)
        {
            cout << vv[i] << " ";
        }
        cout << e;
        for ( i = 0; i < x; i++)
        {
            if ((v[i] == vv[i] )||( v[i] == vvv[i]))
            {
                f = 0;
            }
            else
            {
                f = 1;
                break;
            }
        }
        if (f)
            cout << "no" << e;
        else
            cout << "yes" << e;
    }

    return 0;
}
