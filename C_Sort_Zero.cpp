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
    cin >> n;
    vector<int> v(n);
    set<int> st;
    vector<bool> vis(n + 1, false);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (j = n - 1; j > 0; j--){
        if(v[j] < v[j-1]){
            a = j;
            f = 1;
            vis[v[j]] = true;
            break;
        }
        
    }
    if(!f){
        cout << 0 << e;
        return;
    }
    j--;
    while (j>=0)
    {
        st.insert(v[j]);
        mx = max(mx, v[j]);
        vis[v[j]] = true;
        j--;
    }
    j = n - 1;
    //cout << "mx" <<mx << e;
    for (j = n - 1; j >= a; j--){
        if(v[j] == mx){
            while (j>=a)
            {
                st.insert(v[j]);
                j--;
            }
        }
        if(vis[v[j]]){
            while (j>=a)
            {
                st.insert(v[j]);
                j--;
                /* code */
            }
        }
    }
    cout << st.size() << e;
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