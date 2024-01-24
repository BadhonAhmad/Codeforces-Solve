#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()
{
    int t;
    cin >> t;
    while(t --){
        int n , m;
        cin >> n >> m;
        string s;
        cin >> s;
        string t;
        cin >> t;
       
        n = s.size();
        int ans = INT_MAX;
        for(int i = 0 ; i + m - 1< n ; i ++){
            int cur = 0;
            for(int j = 0 ; j < m ; j ++){
                int z = abs(t[j] - s[i + j]);
                cur += min(z , 10 - z);
            }
            ans = min(ans , cur);
        }
        cout<<ans<<"\n";
    }
}