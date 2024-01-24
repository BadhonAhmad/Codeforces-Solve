/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long int
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"
const int N = 1e5 + 10;

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>s;
    n = s.size();
    i = 0;
    while (i < n-1)
    {
        if(s[i] == '_'){
            j = i;
            while (s[i] == '_')
            {
                ct++;
                i++;
            }
            
            if(ct>1){
                sm += ct;
                sm--;
                // if(s[i] == '^' ||s[j-1]=='^')
                // sm--;
            }
        }
        else{
            i++;
            ct = 0;
        }
    }
    
    cout << sm << e;
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