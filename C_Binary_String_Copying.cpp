#include <bits/stdc++.h>
using namespace std;

#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int i, j, k, a, b, c, sm = 0, ct = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    string s, t;
    cin >> n >> k >> s;
    set<pair<int, int>> st;
    for (i = 0; i < k; i++)
    {
        cin >> a >> b;
        int idx1 = a-2;
        int idx2 = b;
        if (idx1 >= 0)
        {
            while (s[idx1] != '1')
            {
                idx1--;
                if (idx1 < 0)
                {
                    idx1 = 0;
                    break;
                }
            }
        }
        else{
            idx1 = 0;
        }
        if(idx2 <= n-1){
            while (s[idx2] != '0')
            {
                idx2++;
                if(idx2>=n){
                    idx2 = n - 1;
                    break;
                }
            }
        }
        st.insert({idx1, idx2});
    }
    cout << st.size() << e;
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}