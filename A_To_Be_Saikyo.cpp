#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,mx=-9;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (size_t i = 0; i < n; i++)
 
    {
        cin >> v[i];
        mp[v[i]]++;
        mx = max(v[i], mx);
    }
    if(mx == v[0] && mp[v[0]] == 1)
        cout << 0 << endl;
    else
    cout << mx - v[0] + 1 << endl;

    return 0;
}