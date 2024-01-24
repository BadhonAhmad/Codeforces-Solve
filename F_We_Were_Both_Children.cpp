#include <bits/stdc++.h>
using namespace std;

#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long
#define yes cout << "YES\n"
#define no 1000000000

void solve()
{
    int i, j, k, a, b, c, sm = 0, ct = 0, n, m, f = 0;
    string s, t;
    cin >> n;
    vll v(n + 1, 0), mx(n + 1, 0),cnt(n+1,0);
    for(i = 0; i < n; i++){
        cin >> v[i];
        if(v[i]<=n)
        cnt[v[i]]++;
    }
    for(i = 1; i <= n; i++){
        for(j = i; j <= n; j+=i){
            mx[j] += cnt[i];
        }
    }
    cout << *max_element(all(mx)) << e;
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