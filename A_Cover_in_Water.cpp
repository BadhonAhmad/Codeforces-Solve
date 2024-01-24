#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0, ct = 0, ans = 0, f = 0;
    for(int i = 1; i < n-1 ; i++){
        if(s[i] == '.'){
            if(s[i-1] == '.' && s[i+1] == '.'){
                cout << 2 << endl;
                return;
            }
        }
    }
    i = 0;
    while (i < n)
    {
        if (s[i] == '.')
        {
            while (s[i] == '.' && i < n)
            {
                ct++;
                i++;
            }
        }
        else
            i++;
        if (ct > 2)
        {
            if (!f)
                ans += 2, ct = 0, f = 1;
        }
        else
        {
            if (!f)
                ans += ct, ct = 0;
        }
    }
    cout << ans << endl;
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
