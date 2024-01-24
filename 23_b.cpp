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
        cin >> n;
        ans = 0, sum = 0;
        vll v(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        sort(all(v));
        f = 0;
        for ( i = n-1; i >= 0; i--)
        {
            if(f == 0){
                f = 1;
                if(v[i]%2 == 0){
                    ans += v[i];
                }
                else{
                    v[i] += 100;
                    i++;
                    sum = 0;
                    break;
                }
            }
            else{
                f = 0;
                if(v[i]%2){
                    sum += v[i];
                }
                else{
                    sum = 0;
                    break;
                    if(v[i]-100 >0){
                        v[i] -= 100;
                        i++;
                    }
                    else{
                        i++;
                    }
                }
            }
        }
        if(sum){
            cout << 1 << e;
            
        }
        else{
            cout << 0 << e;
        }
    }
    return 0;
}

