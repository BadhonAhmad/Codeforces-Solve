#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e5 + 10;
int32_t main()
{
    /*
    “If you’re always trying to be normal you will never know how amazing you can be.”
    ~ Maya Angelou
    */
    int n, m;
    cin >> n >> m;
    int x[n];
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    int l = 0, r = 0, sum = 0, ans = LONG_LONG_MIN,cnt=0;
    while (r<n)
    {
        sum += x[r];
        r++;
        cnt++;
        while (sum>m)
        {
            sum -= x[l];
            l++;
            cnt--;
        }
        ans = max(cnt, ans);
    }
    cout << ans;
    return 0;
}