#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
#define int             long long 



void solve()
{
    int j,n,i;
    cin >> n;
    int a[n],b[n];
    vector<int> c;
    map<int, int> m1,m2;
    int ct1=1, ct2 = 0;
    for ( i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i>0){
            if(a[i] == a[i-1])
            {
                ct1++;
            }
            else
                ct1 = 1;
        }
        m1[a[i]] = max(m1[a[i]], ct1);
    }
    ct1 = 1;
    for ( i = 0; i < n; i++)
    {
        cin >> b[i];
        if(i>0){
            if(b[i] == b[i-1])
            {
                ct1++;
            }
            else
                ct1 = 1;
        }
        m2[b[i]] = max(m2[b[i]], ct1);
    }
    int mx = LONG_LONG_MIN;
    for (i = 0; i < n; i++){
        mx = max(m2[a[i]] + m1[a[i]], mx);
    }
    for (i = 0; i < n; i++){
        mx = max(m1[b[i]] + m2[b[i]], mx);
    }
    cout << mx << e;
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