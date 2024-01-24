#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define CC(x) cout << "Case " << ++x << ":";
#define nn "\n"
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define pb(a) push_back(a)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 998244353
#define N 1000006

void solve()
{
    int n, f = 0;
    cin >> n;
    string s;
    cin >> s;
    set <int> st;//st{0};
    for (int i = 1; i <= n; i++)
    {
        st.insert(s[i-1]);
        if (s[i-1] == s[n - i])
        {
            f = 1;
        }
    }
    if(st.size()  == 1){
        cout << -1 << endl;
        return;
    }
    if (!f)
        cout << 0 << endl << endl;
    else
    {
        int ct = 1;
        vector<int> v;
        while (ct < 300)
        {
            f = 0;
            reverse(s.begin(), s.end());
            s += "01";
            v.push_back(1);
            reverse(all(s));
            for (int i = 1; i <= n; i++)
            {
                if (s[i - 1] == s[n - i])
                {
                    f = 1;
                }
            }
            if( !f ){
                cout << v.size() << endl;
                for(auto it : v) cout << it << ' ';
                cout << endl;
                return;
            }
            ct++;
        }
        cout << -1 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
