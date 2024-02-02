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
int32_t main()
{
    int cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j,cs, k, a, b, c, n, m;
    cin >> n;
    vll v(n);
    cin >> a >> b;
    x = 0, y = 0, z = 0;
    for ( i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]<=a){
            x++;
        }
        if(v[i]>a && v[i]<=b){
            y++;
        }
        if(v[i]>b){
            z++;
        }
    }
    cout << min(x,min(y,z)) << e;

    return 0;
}

