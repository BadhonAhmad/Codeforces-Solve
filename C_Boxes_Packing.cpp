#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define nl cout<<"\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define as cout << ans << "\n"
#define yn cout << (f? "YES":"NO") << "\n"
const int N=2e5+10;
using namespace std;
int32_t main()
{
    fastio;
    int ct, tc, f, sum, ans, t, x, y, z, i, j, k, a, b, c, d, n, m;
    ans = 0, ct = 1, f = 0, sum = -1;
    cin >> n;
    vll v(n);
    map<int, int> mp;
    vector<int> vv;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        sum = max(mp[v[i]], sum);
    }
    cout<<sum;
     return 0;
}