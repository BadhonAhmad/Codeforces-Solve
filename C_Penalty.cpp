#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define pb(a) push_back(a)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 998244353
#define N 1000006

void solve()
{
    string s, t;
    cin >> s;

    int ct1 = 0, ct2 = 0, ct3 = 0, ct4 = 0;
    int mn1 = LONG_LONG_MAX,mn2 = LONG_LONG_MAX;
    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            if(s[i] == '1' || s[i] == '?') ct1++;
            if(s[i] == '1') ct3++;
            if(ct1 > ct2 + (10-i)/2) mn1= min(mn1,i+1);
            if(ct2 > ct1 + (9-i)/2) mn1= min(mn1, i+1);
            if(ct3 > ct4+(10-i)/2) mn2=min(mn2, i+1);
            if(ct4 > ct3 + (9-i)/2) mn2 = min(mn2, i+1);
        }
        else{
            if(s[i] == '1') ct2++;
            if(s[i] == '1' || s[i] == '?') ct4++;
            if(ct1 > ct2 + (9-i)/2) mn1= min(mn1,i+1);
            if(ct2 > ct1 + (9-i)/2) mn1= min(mn1, i+1);
            if(ct3 > ct4+(9-i)/2) mn2=min(mn2, i+1);
            if(ct4 > ct3 + (9-i)/2) mn2 = min(mn2, i+1);
        }
    }
    if(mn1 == LONG_LONG_MAX && mn2 == LONG_LONG_MAX){
        cout << 10 << endl;
        return;
    }
    cout << min(mn1,mn2) << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
