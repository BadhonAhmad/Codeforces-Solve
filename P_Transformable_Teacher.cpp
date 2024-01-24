#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e5 + 10;
int32_t main()
{
    int i,n , m;
    cin >> n >> m;
    int ans = (1LL<<62);
    vector<int> h(n);
    for (i = 0; i < n; i++){
        cin >> h[i];
    }
    sort(h.begin(), h.end());
    vector<int> pref(n), suff(n);
    int cnt = 1;
    pref[0] = 0;
    for (i = 0; i < n; i+=2){
        pref[cnt] = pref[cnt - 1] + abs(h[i] - h[i + 1]);
        cnt++; 
    }

    cnt = 1;
    suff[0] = 0;
    for (i = n - 1; i >= 0; i-=2){
        suff[cnt] = suff[cnt - 1] + abs(h[i] - h[i - 1]);
        cnt++;
    }

    while (m--)
    {
        int x;
        cin >> x;
        int s = lower_bound(h.begin(), h.end(), x)-h.begin();
        int res = pref[s / 2]+suff[(n - s) / 2];
        if(s%2){
            res += abs(x - h[s - 1]);
        }
        else {
            res += abs(x - h[s]);
        }
        ans = min(ans, res);
    }
    cout << ans;
}