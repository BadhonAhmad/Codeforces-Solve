#include <bits/stdc++.h>
using namespace std;

#define e               "\n"
#define int             long long 
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
#define mod     1000000007


void solve()
{
    int n;
    cin >> n;
    string s,rev,si;
    cin >> s;
    
    char old = s[0];
    si += old;
    for (int i = 1; i < n; i++){
        if(s[i] != old){
            si += s[i];
            old = s[i];
        }
    }
    int i = 0;
    int mark[26];
    memset(mark, 0, sizeof(mark));
    while (i<n)
    {
        char ch = s[i];
        if(mark[ch-'A']  == 0)
            rev += s[i], mark[ch - 'A'] = 1;
        while (s[i] == ch)
        {
            i++;
        }
    }
    //cout << si << ' ' << rev << endl;
    int j = 0;
    if(rev == si){
        yes;
    }
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