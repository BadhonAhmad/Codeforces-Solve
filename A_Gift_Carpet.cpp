/*****from dust i have come, dust i will be*****/
#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i, j, k, a, b, c, d, x, y, z, ans = 0, sm = 0, ct = 0, n, m, f = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN;
    string s = "vika", t;
    cin >> n >> m;
    char nam[n][m];
    vector<char> ss[n];
    vector<string>sk;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            nam[i][j] = ch;
        }
    }
    int ii=0;
    for(i=0; i<m; i++){
        for(j = 0; j < n; j++){
            if(nam[j][i] == s[ii]){
                ct++;
                ii++;
                break;
            }
        }
    
    }
    if(ct == 4) yes;
    else no;
    
    return;
}

signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}