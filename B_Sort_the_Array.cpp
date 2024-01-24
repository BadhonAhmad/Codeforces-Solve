/*****from dust i have come, dust i will be*****/
#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long
#define yes1 cout << "yes\n"
#define no1 cout << "no\n"
#define mod 1000000007

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i, j, k, a, b, c, d, x, y, z, ans = 0, sm = 0, ct = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    string s, t;
    cin >> n;
    vector<int> v(n + 1), vv(n + 1), vvv(n + 1);
    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vv = v;
    vvv = v;
    reverse(all(v));
    sort(all(vv));
    if (v == vv)
    {
        yes1;
        cout << 1 << " " << n;
    }
    else
    {
        j = n;
        reverse(all(v));
        int i1 = -1, i2 = -1;
        for (i = 1; i < j;)
        {
            if (v[i] != vv[i] && i1 == -1)
                i1 = i;
            else if (i1 == -1)
                i++;
            if (v[j] != vv[j] && i2 == -1)
                i2 = j;
            else if (i2 == -1)
                j--;
            if (i1 != -1 && i2 != -1)
                break;
        }
        reverse(v.begin() + i1, v.begin() + i2+1);
        // for(auto it:v){
        //     cout << it << ' ';
        // }
        if (v == vv)
        {
            yes1;
            if(i1 == -1 && i2 == -1){
                cout << 1 << ' ' << 1;
            }
            else 
            cout << i1 << " " << i2;
        }
        else {
            no1;
        }
    }
    return;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1; // cin >> t;
    while (t--)
        solve();
}