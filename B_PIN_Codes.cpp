/**Everyone who is taken by death asks for more time, while
everyone who has time makes excuses for procrastination.
--Ali Ibn Abi Talib(Ra)**/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define no cout << "NO\n"
#define prnt(v)            \
    for (auto it : v)      \
        cout << it << " "; \
    cout << "\n";
#define db(x) cout << #x << " = " << x << " , " << '\n';
#define db2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << '\n'
#define db3(x, y, z) cout << #x << "=" << x << "," << #y << "=" << y << "," << #z << "=" << z << '\n'
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
bool cmp(pair<int, int> a, pair<int, int> b) { return a > b; }                /// boro theke choto base on 1st element
bool cmp2(pair<string, int> a, pair<string, int> b) { return a.second < b.second; } // choto theke boro base on 2nd element
void solve()
{
    int i, j, n, sm = 0;
    cin >> n;
    vector<pair<string, int>> vp, anss;
    map<string, int> mp;
    for (i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vp.push_back({s, i});
        mp[s]++;
    }

    for (auto i : mp)
    {
        int a = i.second;
        sm += (a - 1);
    }

    sort(vp.begin(), vp.end());
    if (sm != 0)
    {
        set<string> an;
        for (auto i : vp)
        {
            int prv = an.size();
            string s = i.first;
            int id = i.second;
            an.insert(s);
            int now = an.size();
            if (prv != now)
            {
                anss.push_back({s, id});
                continue;
            }
            
            int f = 0;
            for (int k = 0; k < 4; k++)
            {
                f = 0;
                char tm = s[k];
                for (char ch = '0'; ch <= '9'; ch++)
                {
                    s[k] = ch;
                    //db(s[k]);
                    if (an.count(s) == 0 && mp.count(s) == 0)
                    {
                        an.insert(s);
                        mp[s]++;
                        anss.push_back({s, id});
                        f = 1;
                        break;
                    }
                }
                if (f)
                {
                    break;
                }
                else{
                    s[k] = tm;
                }
            }
        }
    }

    sort(anss.begin(), anss.end(), cmp2);
    sort(vp.begin(), vp.end(), cmp2);
    cout << sm << '\n';
    if (sm != 0)
    {
        for (auto i : anss)
        {
            cout << i.first << '\n';
        }
    }
    else
    {
        for (auto i : vp)
        {
            cout << i.first << '\n';
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T = 1;
    cin >> T;

    while (T--)
        solve();

    return 0;
}
