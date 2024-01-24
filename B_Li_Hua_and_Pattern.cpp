#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007

void solve()
{
    int i, j, k, a, b, c, sm = 0, ct = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    string s, t;
    cin >> n >> k;
    a = n - 1;
    k = k * 2;
    vector<string> v(n),vv(n);
    for (i = 0; i < n; i++)
    {
        s = "";
        for (j = 0; j < n; j++)
        {
            char ch;
            cin >> ch;
            s += ch;
        }
        v[i] = s;
        reverse(all(s));
        vv[a--] = s;
    }
    if(v == vv){
        yes;
        return;
    }
    for ( i = 0; i < n; i++)
    {
        s = v[i];
        t = vv[i];
        //
        for(j = 0; j < n; j++){
            if(s[j] != t[j])
                ct++;
        }
        //cout << t << e;
    }
    if(2*ct<=k)
        yes;
    else
        no;

    return;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}