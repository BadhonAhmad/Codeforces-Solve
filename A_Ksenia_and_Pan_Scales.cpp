/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int N = 1e5 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i, j, k, a, b, c, sm = 0, ct = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    /***********let's go***************/
    string s, t;
    cin >> s;
    cin >> t;
    int bfr = 0, afr = 0;
    vector<char> vf, af;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == '|')
            f = 1;
        if (!f && s[i] != '|')
        {
            bfr++;
            vf.pb(s[i]);
        }
        else if (f && s[i] != '|')
        {
            afr++;
            af.pb(s[i]);
        }
    }
    int dif = max(bfr, afr) - min(bfr, afr);
    
    if (dif == t.size())
    {
        if(afr>bfr){
            for(auto it:vf){
                cout << it;
            }
            cout << t;
            cout << '|';
            for(auto it:af){
                cout << it;
            }
        }
        else{
            for(auto it:vf){
                cout << it;
            }
            cout << '|';
            for(auto it:af){
                cout << it;
            }
            cout << t;
        }
        return;
    }
    
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}