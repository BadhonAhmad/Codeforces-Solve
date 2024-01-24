/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int N = 1e5 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i, j, k=0, a = 0, b, c, sm = 0, ct = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    string s, t;
    cin >> n >> m;
    vector<int> v(n + 1), vk(m + 1);
    for (i = 0; i < n + 1; i++)
    {
        cin >> v[i];
        if (v[i] < 0)
        {
            ct++,
            a = 1;
        }
    }
    for (i = 0; i < m + 1; i++)
    {
        cin >> vk[i];
        if (vk[i] < 0)
            f = 1, k++;
    }
    if (n == m)
    {
        int g = __gcd((v[0]), vk[0]);
        if ((v[0]<0 && vk[0] > 0)||(v[0]>0 && vk[0]  0))
        {
            cout << "-" << abs(v[0] / g) << "/" << abs(vk[0] / g) << e;
        }
        else
        {
            cout << v[0] / g << "/" << vk[0] / g;
        }
    }
    else
    {
        if (n < m)
        {
            cout << "0/1";
        }
        else
        {
            
            if((v[0]>0 && vk[0]>0) ||(v[0]<0 && vk[0]<0)){
                cout << "Infinity";
            }
            else
                cout << "-Infinity";
        }
    }

    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}