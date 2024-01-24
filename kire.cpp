#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N = 1e5 + 10;
int32_t main()
{
    int n;
    cin >> n;
    vector<int> v(n) , dp(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i ++){
        dp[i] = 1;
        for (int j = 0; j < i; j ++){
            if(v[j] < v[i]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    for (int i = 0; i < n; i ++) cout<<dp[i]<<" ";
}