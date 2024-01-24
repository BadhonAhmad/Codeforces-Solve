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
    int i, j, k, a, b, c, sm = 0, ct = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    /***********let's go***************/
    string s, t;
    cin >> n;
    vector<int> v(n + 1),an;
    
    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    i = 1;
    while (i <= n)
    {
        j = i;
        while (v[i] == v[j])
        {
            j++;
        }
        if(j == i+1){
            cout << -1 << e;
            return;
        }
        for (k = i; k < j; k++){
            if(k == i){
                an.pb(j-1);
            }
            else{
                an.pb(k - 1);
            }
        }
        i = j;
    }
    for(auto it:an){
        cout << it << ' ';
    }
    cout << e;
    return;
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