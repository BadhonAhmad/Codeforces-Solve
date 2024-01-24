/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i, j, k, a, b, c, sm = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    string s, t;
    cin >> n;
    vector<int> v(n + 1);
    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
        sm += v[i];
    }
    if(sm != 0){
        yes;
        cout << 1 << e;
        cout << 1 << ' ' << n << e;
        return;
    } 
    sm = 0;
    for(i = 1; i <= n; i++){
        sm += v[i];
        if(sm!=0){
            yes;
            cout << 2 << e;
            cout << 1 << ' ' << i << e;
            cout << i + 1 << ' ' << n << e;
            return;
        }
    }
    no;
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