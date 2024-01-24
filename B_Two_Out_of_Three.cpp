#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define pb(a) push_back(a)
#define yes cout << "YES\n"
#define no cout << "NO\n"
int ceil_div(int a, int b)
{
    return a % b == 0 ? a / b : a / b + 1;
}

void solve()
{
    int n, i, ct = 0;
    cin >> n;
    vector<int> v(n), vv(n);
    map<int, vector<int>> mp;
    map<int, int> mp1;
    set<int> st;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]].push_back(i);
        mp1[v[i]]++;

        if (mp1[v[i]] >= 2)
        {
            st.insert(v[i]);
        }
    }
    if (st.size() < 2)
    {
        cout << -1 << endl;
    }
    else
    {
        int f = 0;
        for (auto it : mp)
        {
            if (it.second.size() > 1)
            {
                if (f == 0)
                {
                    vv[it.second[0]] = 1;
                    for (int k = 1; k < it.second.size(); k++)
                    {
                        vv[it.second[k]] = 2;
                    }
                }
                else
                {
                    vv[it.second[0]] = 1;
                    for (int k = 1; k < it.second.size(); k++)
                    {
                        vv[it.second[k]] = 3;
                    }
                }
                f=1;
            }
            else vv[it.second[0]] = 1;
        }
        for(auto it : vv){
            cout << it <<' ';
        }
        cout << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
