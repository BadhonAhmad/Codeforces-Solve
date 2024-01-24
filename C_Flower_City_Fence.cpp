
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        vector<int> v(n + 1), rotated(n + 1);
        for (i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        if (v[1] != n)
        {
            cout << "NO\n";
            continue;
        }
        for(i=1; i<=n; i++){
            rotated[v[i]]++;
        }
        for(i=n-1; i>=1; i--){
            rotated[i]+=rotated[i+1];
        }
        if(rotated == v){
            cout<<"YES\n";
        }
        else cout << "NO\n";
    }

    return 0;
}