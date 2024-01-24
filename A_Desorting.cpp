#include <bits/stdc++.h>
using namespace std;
#define int long long
#define e               "\n"


void solve()
{
    int n,mn=LONG_LONG_MAX;
    cin >> n;
    vector<int> v(n),vk(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i)
            mn = min(v[i] - v[i - 1], mn);
        vk[i] = v[i];
    }
    sort(vk.begin(), vk.end());
    if(vk!= v){
        cout << 0 << e;
    }
    else{
        if(mn == 0)
            cout << 1 << e;
        else if(mn == 2)
            cout << 2 << e;
        else
        cout << (mn) / 2+1 << e;
    }

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