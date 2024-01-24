#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e5 + 10;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> vp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            vp.push_back(make_pair(a, i));
        }
        sort(vp.begin(), vp.end());
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ar[n];
        // while (!v.empty())
        // {
        //     int x = vp.back().second;
        //     ar[x] = v.back();
        //     vp.pop_back();
        //     v.pop_back();
        // }
        for (int i = 0; i < n; i++)
        {
            ar[vp[i].second] = v[i];
        }
        for (int i = 0; i < n; i++)cout << ar[i] << ' ';
        cout << endl;
    }
    return 0;
}