#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int N=2e5+10;
using namespace std;
/**********************************************************************/
int32_t main()
{
    fastio;
    int cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j,cs, k, a, b, c, n, m;
    cin >> tc;
    cs=1;
    while (tc--)
    {  
        cin >> a >> b >> m;
        f = 0;
        while (a && b)
        {
            a = abs(a - b);
            if(a == 0 || b == 0) break;
            if(abs(a-b) == m){
                f = 1;
                break;
            }
            b = abs(a - b);
            if(abs(a-b) == m){
                f = 1;
                break;
            }
        }
        if(f)
            yes;
        else
            no;
    }
    return 0;
}

