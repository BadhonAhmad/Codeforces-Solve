#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e5 + 10;
int n;
int dp[N];
int f(int x){
    if(x > n)
        return 0;
    if(x == n)
        return 1;
    if(dp[x] != -1)
        return dp[x];
    int ret = 0;
    for (int i = 1; i <= 6; i++){
        ret =(ret+f(x+i))%N;
    }
    return dp[x] = ret;
}
int32_t main()
{
    memset(dp, -1, sizeof(dp));
    cin >> n;
    cout << f(0);
}