#include <bits/stdc++.h>
#define int long long
#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cy cout<<"Case "<<cs++<<": "<<"YES"<<endl
#define ca cout<<"Case "<<cs++<<": "<<ans<<endl
#define cn cout<<"Case "<<cs++<<": "<<"NO"<<endl
const int N=2e5+10;
using namespace std;
/**********************************************************************/
int f(int mid)
{
    int k = 1, ans = 0;

    for (int i = 0; i <= 38; i++)
    {
        if(mid & (1ll<<i)){
            ans += pow(3,i);
        }
    }
    return ans;
}
int32_t main()
{
    int cnt = 0,tc, sum = 0, ans = 0, t,x, y, z, i, j,cs, k, a, b, c, n, m;
    cin >> tc;
    cs=1;

    while (tc--)
    {  
        cin >> n;
        int lo = 0;
        ans = n;
        int hi = 1ll << 39;
        while (lo<=hi)
        {
            int mid = (lo + hi) / 2;
            t = f(mid);
            if(t<n){
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
                ans =t;
            }   
           
        }
        cout << ans << e;
    }
    return 0;
}

