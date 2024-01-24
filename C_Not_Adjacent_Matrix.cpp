#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int N=2e5+10;using namespace std;
/**********************************************************************/
int32_t main()
{
    fastio;
    int cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j,cs, k, a, b, c, n, m;
    cin >> tc;
    cs=1;
    while (tc--)
    {  
        cin >> n;
        if(n==2) {
            cout << -1 << e;
            continue;
        }
        else{
            f = 0;
            x = 1;
            y = n*n;
            for ( i = 0; i < n; i++)
            {
                for ( j = 0; j < n; j++)
                {
                    if(!f){
                        f = 1;
                        cout << x++ << " ";
                    }
                    else{
                        f = 0;
                        cout << y-- << " ";
                    }
                }
                cout << e;
            }

            
        }
    }
    return 0;
}

