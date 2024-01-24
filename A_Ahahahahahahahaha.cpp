/*****from dust i have come, dust i will be*****/
#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i, j, k, a, b, c, d, x, od = 0, ev = 0, y, z, ans = 0, sm = 0, ct = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    string s, t;
    cin >> n;
    vector<int> v(n), id;
    x = n;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i])
            ct++;
    }
    sm = n - ct;
    if(ct<=n/2){
        cout << sm << e;
        for(i = 0; i < n; i++){
            if(v[i] == 0)
                cout << 0 << " ";
        }
        cout << e;
    }
    else{
        if(ct%2 == 1)
        cout << --ct << e;
        else
        cout << ct << e;
        for(i = 0; i < n; i++){
            if(v[i] == 1){
                cout << v[i] << ' ';
                f++;
            }
            if(f == ct){
                break;
            }
        }
        cout << e;
    }
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