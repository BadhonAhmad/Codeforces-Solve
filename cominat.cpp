#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define nl cout<<"\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define as cout << ans << "\n"
#define yn cout << (f? "YES":"NO") << "\n"
const int N=2e5+10;
using namespace std;
int32_t main()
{
    fastio;
    int ct,tc,f,sum,ans,t,x,y,z,i,j,k,a,b,c,d,n,m;
    cin >> n >> m;
    int dp[n][m];
    for (i = 1; i < n; i++){
        for (j = 1; j < n; j++){
            dp[i][j] += dp[i - 1][j];
            dp[i][j]+=
        }
    }
        return 0;
}

