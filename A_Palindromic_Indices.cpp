#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define ld long double
#define vll vector<ll>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const ll N=2e5+10;
using namespace std;

int main()
{
    fastio;
    ll cnt = 0,tc, f = 0, sum = 0, ans = 0, t,x, y, z, i, j, k, a, b, c, n, m;
    cin >> tc;
    while (tc--)
    {  
        cin >> n;
        string s;
        cin >> s;
        ans = LONG_LONG_MIN;
        cnt = 1;
        for (size_t i = 0; i < s.size()-1; i++)
        {
            if(s[i] == s[i+1]){
                cnt++;
                ans = max(ans, cnt);
            }
            else
                cnt = 1;
        }
        cout << cnt << e;
    }
    return 0;
}

