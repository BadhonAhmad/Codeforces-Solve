#include <bits/stdc++.h>
using namespace std;

#define e "\n"
#define int long long
#define SetBit(x, k) (x |= (1LL << k))
#define CheckBit(x, k) (x & (1LL << k)) //(1&(x>>k))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    if(a[n-1] == 0){
        cout << n << endl;
        return;
    }
    int ln = 0;
    int id;
    int f = 0;// -4 -3 -2
    for (int i = 0; i < n - 1; i++)
    {
        if ((abs(a[i]) + abs(a[i + 1])) < a[n - 1])
        {
            ln = i + 1;
            id = i;
            f = 1;

            break;
        }
    }
    if (f)
    {
        if (abs(a[id]) + abs(a[n - 2]) >= a[n - 1])
        {
            ln++;
        }
    }
    cout << ln << e;
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