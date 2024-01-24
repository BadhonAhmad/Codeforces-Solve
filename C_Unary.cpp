/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long int
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
const int N = 1e6 + 3;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;

    cin >> s;
    map<char, int> value;
    /* 
    ">"  →  1000,
"<"  →  1001,
"+"  →  1010,
"-"  →  1011,
"."  →  1100,
","  →  1101,
"["  →  1110,
"]"  →  1111.
*/
    value['>'] = 8;
    value['<'] = 9;
    value['+'] = 10;
    value['-'] = 11;
    value['.'] = 12;
    value[','] = 13;
    value['['] = 14;
    value[']'] = 15;
    reverse(all(s));
    a = 1;
    for (i = 0; i < s.size(); i++){
        sm += value[s[i]]*a;
        a *= 16;
        a %= N;
        sm %= N;
    }
    cout << sm;
    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
        solve();
    return 0;
}