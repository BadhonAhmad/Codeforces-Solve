#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define yes cout << "YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout << "NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve()
{
    string s;
    cin >> s;
    int ct = 0, n = s.size();
    for (int i = 1; i < n;i++)
    {
        int f = 0;

        if (s[i] == s[i - 1])
        {
            ct++;
            f =1;
            s[i] = '.';
        }

        if (s[i] == s[i - 2] && i > 1)
        {
            if(!f)
                ct++;
            s[i] = '.';
        }
    }
    
    cout << ct << endl;
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
