#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define nl cout<<"\n"
#define as cout << ans << "\n"
#define yn cout << (f ? "":"-1") << "\n"
const int N=2e5+10;
using namespace std;
/**********************************************************************/
int32_t main()
{
    fastio;
    int ct,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j,k, a, b, c, n, m;
    cin >> tc;
    while (tc--)
    {  
        ans = 0,ct = 0,f = 0,sum = 0;  
        cin >> n;
        vll v(n+1);
        for(i = 1; i <= n; i++){
            cin>>v[i];
        }
        int mn = 1, mx = n;
        j = n;
        for (i = 1; i < j - 1;)
        {
            if(v[i] == mn || v[i] == mx ){
                
                f = 1;
                if(v[i] == mn)
                    mn++;
                if(v[i] == mx)
                    mx--;
                i++;
            }
            if( v[j] == mn || v[j] == mx)
            {
                f = 1;
                if(v[j] == mn)
                    mn++;
                if(v[j] == mx){
                    mx--;
                }
                j--;
            }
            if(!f){
                ct++;
                cout << i << " " << j, nl;
                break;
            }
            f = 0;
        }
        if(!ct)
            cout << -1, nl;
    }
    return 0;
}

