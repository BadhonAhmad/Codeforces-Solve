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
    string s, t;
    cin >> s >> t;
    set<char> st; // st{0};
    int f = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == 'a')
            f = 1;
    }
    if(t == "a"){
        cout << 1 << endl;
        return;
    }
    if (f)
    {
            cout << -1 << endl;
            return;
    }
    int k = s.size();
    cout << (1LL << k) << endl;
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
