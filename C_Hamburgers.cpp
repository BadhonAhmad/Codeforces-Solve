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
int aa, bb, cc;
int ache;
int cnt = 0,tc, f = 0,mid,sum = 0, ans = LONG_LONG_MIN, t,x, y, z, i, j,cs, k, a, b, c, n, m;
int cal(int mid){
    if((mid*aa-a)>0){
        ache -= ((mid*aa-a) * x);
    }
    if((mid*bb-b)>0){
        ache -= ((mid * bb - b) * y);
    }
    if((mid*cc-c)>0){
        ache -= ((mid * cc - c) * z);
    }
    return ache;
}
int32_t main()
{
    fastio;
    string s;
    map<char, int> mp;
    cin >> s;
    for ( i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    cin >> a >> b >> c;
    cin >> x >> y >> z;
    cin >> cs;

     aa = mp['B'];
     bb = mp['S'];
     cc = mp['C'];

    int lo = 0, hi = 1e14;
    while (lo<=hi)
    {
        ache = cs;
        mid = (lo + hi) / 2;
        if(cal(mid)>=0){
            ans = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    cout << ans << e;

    return 0;
}

