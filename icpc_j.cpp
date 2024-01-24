#include <iostream>
#include<vector>

#define int long long
using namespace std;

int v[100];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j,cs, k, a, b, c, n, m;
    cin >> tc;
    cs=1;
    while (tc--)
    {  
        cin >> n >> m;
        ans = 0;
        x = 0;
        for ( i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        ans += v[m];
        if(v[1]>ans){
            ans += v[1] - ans;
        }
        for ( i = 1; i <= n-1; i++)
        {
            if(v[i+1]>v[i]){
                ans += v[i + 1] - v[i]-x;
            }
            else if(v[i] > v[i+1]){
                x += v[i]-v[i + 1];
            }
            ans += v[i];
        }
        ans += v[n];
        cout <<"Case "<<cs++<<": "<< ans-1 << "\n";
    }
    return 0;
}

