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
        ans = 0;
        vll v(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cin >> m;
        for (size_t i = 0; i < m; i++)
        {
            cin >> x;
            ans += x;
        }

                cout << v[ans%n]  << e;
    }
    return 0;
}

