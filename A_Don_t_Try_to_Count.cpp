#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    int ct = 0;
    for (; ct <= 6; ct++)
    {
        if (x.size() >= m)
        {
            for (int i = 0; i < x.size(); i++)
            {
                if (x.substr(i, m) == s)
                {
                    cout << ct << endl;
                    return;
                }
            }
        }
        x += x;
    }
    cout << -1 << endl;
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
