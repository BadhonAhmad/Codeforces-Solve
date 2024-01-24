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
    int i, j, k, a, b, c, sm = 0, ans = -1, ct = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    string s, t;
    cin >> n >> m;
    b = m;
    int mxval,mini;

    vector<int> v(n), vk(n);
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]<mn){
            mn = v[i];
        }
        v[i] += ct;
        ct++;
    }
    for (i = 0; i < n; i++)
    {
        cin >> vk[i];
        if(mx<vk[i]){
            mx = vk[i];
            j = i;
        }
    }

    i = 0;
    if(mn > m){
        if(m == v[0]){
            cout << 1 << e;
            return;
        }
        cout << -1 << e;
        return;
    }
    int val=-99999;
    int id=-1;
    // 1 5 9 9 10
    // 3 4 7 1 9
    // mn=1;
    // mx=9;
    /*
    j=4;
    */
    while (j>0)
    {
       if(m>=v[j]){
        if(val<vk[j]){
            val = vk[j];
            id = j + 1;
            if(val == mx) break;
        }
       }
       j--;
    }
    if(id == -1){
        if(b >= v[0]){
            cout << 1 << e;
            return;
        }
    }
    cout << id << endl;
    return;
    // int n, t;
    // cin >> n >> t;
    // vector<int> v(n), b(n);
    // for(int i=0; i<n; i++){
    //     cin >> v[i];
    // }
    // for (int i = 0; i < n;i++){
    //     cin >> b[i];
    // }
    // int ent = -1, ans = -1;
    // for (int i = 0; i<n; i++){
    //     if(i + v[i] <= t and ent < b[i]){
    //         ent = b[i];
    //         ans = i + 1;
    //     }
    // }
    // //mx = max(mx, v[i]);
    // cout << ans << '\n';
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