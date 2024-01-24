#include <bits/stdc++.h>
using namespace std;

#define e "\n"
#define int long long
#define SetBit(x, k) (x |= (1LL << k))
#define CheckBit(x, k) (x & (1LL << k)) //(1&(x>>k))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int a = s1.size(), b = s2.size();
    if (a != b)
    {
        if (a < b)
        {
            reverse(s1.begin(), s1.end());
            for (int i = 0; i < b - a; i++)
            {
                s1 += '0';
            }
            reverse(s1.begin(), s1.end());
        }
        else
        {
            reverse(s2.begin(), s2.end());
            for (int i = 0; i < a - b; i++)
            {
                s2 += '0';
            }
            reverse(s2.begin(), s2.end());
        }
    }
    int ans = 0, ct = 0;
    for (int i = 0; i < max(a, b); i++)
    {

        if (s1[i] == s2[i] && ct < 1)
        {
            continue;
        }
        else if (ct < 1)
        {
            ans += abs((s1[i] - '0') - (s2[i] - '0'));
            ct++;
        }
        else
        {
            ans += 9;
        }
    }
    cout << ans << e;
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