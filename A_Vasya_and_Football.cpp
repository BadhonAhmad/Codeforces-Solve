/*****from dust i have come, dust i will be*****/
#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i, j, k, a, b, c, d, x, y, z, ans = 0, sm = 0, ct = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    string sh, ta;
    char ch, card;
    cin >> sh >> ta;
    int jersy;
    cin >> n;
    map<pair<char,int>, int> mp;
    for (i = 0; i < n; i++)
    {
        cin >> a >> ch >> jersy >> card;
        if (card == 'r' && mp[{ch,jersy}] != mx)
        {
            if (ch == 'h')
            {
                mp[{'h', jersy}] = mx;
                cout << sh << ' ' << jersy << " " << a << e;
            }
            else
            {
                mp[{'a', jersy}] = mx;
                cout << ta << ' ' << jersy << " " << a << e;
            }
        }
        else if(mp[{ch,jersy}] != mx)
        {
            mp[{ch, jersy}]++;
            if (mp[{'a',jersy}] == 2)
            {
                mp[{'a', jersy}] = mx;
                cout << ta << ' ' << jersy << " " << a << e;
                
            }
            else if (mp[{ 'h',jersy}] == 2){
                cout << sh << ' ' << jersy << " " << a << e;
                mp[{'h', jersy}] = mx;
            }
        }
    }

    return;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1; // cin >> t;
    while (t--)
        solve();
}