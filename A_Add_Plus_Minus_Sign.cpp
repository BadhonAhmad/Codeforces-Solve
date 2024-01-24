/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long int
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/
int n;
vector<int> v(1000000);
int go(int i,int sum){
    if(i == n)
        return 0;
    for (int j = i + 1, cur = 0; j <= n; ++j){
        cur += v[j - 1];
        if(cur>sum)
            return n;
        if(cur == sum)
            return max(j - i, go(j, sum));
    }
    return n;
}
void solve()
{
    int i,j,k,a,b,c,sm=0,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n;
    for (i = 0; i < n; i++){
        cin >> v[i];
    }
    int ans = n;
    for (int len = 1, sum = 0; len < n; ++len){
        sum += v[len - 1];
        ans = min(ans, go(0, sum));
    }
    cout << ans << e;
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