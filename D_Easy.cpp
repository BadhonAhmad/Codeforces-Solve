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
    vector<int> v(n * n);
    for (i = 0; i < n * n; i++)
    {
        cin >> v[i];
    }
    int dif1 = 0, dif2 = 0;
    sort(all(v));
    for(auto it:v){
        cout << it << ' ';
    }
        j = n*n-1;
        for (i = 0; i < n; i++,j--)
        {
            dif1 += v[i];
            dif2 += v[j];
        }
        if(n%2){
            //cout << v[i+1] << " " << v[j+1] << endl;
            dif1 += min(v[i], v[j+1]);
            dif2 += min(v[i],v[j+1]);
            //out << max(v[i], v[j]);
        }
        cout << dif1 - dif2 << endl;
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