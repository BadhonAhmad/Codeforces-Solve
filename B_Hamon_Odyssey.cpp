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
    int i, j, k, a, b, c, sm = 0, ct = 1, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    string s, t;
    cin >> n;
    vector<int> v(n),vn;
    map<int, int> mp;
    set<int> st;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
        mp[v[i]]++;
    }
    a = v[0];
    for(i = 0; i < n; i++){
        a &= v[i];
        if(a == 0){
            if(i == n-1) break;
            ct++;
            a = v[i + 1];
        }
    }
    if(a != 0)
        ct--;
    cout << max(ct,1LL) << e;
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