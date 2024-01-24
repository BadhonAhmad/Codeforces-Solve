#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
int v[200010][36];

int cum[200010][60] = {0};
void bin(int n)
{
    for (int i = 0; i <= 30; i++)
    {
        v[n][i] = ((1 << i) & n) != 0;
    }
}

void precal()
{

    for (int j = 0; j <= 30; j++)
    {
        for (int i = 1; i <= 200000; i++)
        {
            v[i][j] += v[i-1][j];
        }
    }
}
void solve()
{
    int l, r;
    cin >> l >> r;
    int mn = LONG_LONG_MAX;

    for (int i = 30; i >= 0; i--)
    {
        int df = r - l+1;
        int a = v[l - 1][i];
        int b =v[r][i]; 
        mn = min(mn, df - (b - a));
    }
    
    cout << mn << endl;

}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= 200000; i++)
    {
        bin(i);
    }
    
    precal();
   
    while (t--)
        solve();

    return 0;
}
