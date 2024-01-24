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
    int cnt = 0,tc, f = 0, sum = 0, ans=0, t,x, y, z, i, j,cs, k, a, b, c, n, m;
    string s;

    cin >> s;
    cs = s.size();
    map<string, int> mp;
    cnt = LONG_LONG_MIN;
    for ( i = 0; i < s.size(); i++)
    {
        for ( j = i+1; j <= s.size(); j++)
        {
            string temp="";
            for ( k = i; k < j; k++)
            {
                temp+=s[k];
            }
            // if(temp.size() == cs) continue;
           cout << temp << e;
            // mp[temp]++;
            // x = mp[temp];
            // z = temp.size();
            // if(z>cnt && x>=2){
            //     cnt = z;
            //    // cout << temp << e;
            //     // if(z%2 == 0)
            //     //     ans = z;
            //     // else{
            //     //     ans = z + 1;
            //     // }
            //     ans = z;
            // }

        }
        
    }
    //cout << ans << e;

    return 0;
}

