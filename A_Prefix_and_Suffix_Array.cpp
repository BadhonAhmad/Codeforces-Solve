/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i, n;
    cin >> n;
    string s;
    vector<string> vs;
    for (i = 0; i < 2 * n - 2; i++)
    {
        cin >> s;
        vs.push_back(s);
    }
    int j = (n+1) / 2;
    sort(all(vs));
    string t = "";
    for(auto i:vs){
        if(i.size() == j){
            t += i;
        }
    }
    string rev;
    rev = t;
    reverse(all(t));
    if(rev == t)
        yes;
    else
    no;
    return;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}