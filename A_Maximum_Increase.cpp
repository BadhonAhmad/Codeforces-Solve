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
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=1;
    string s,t;
    cin>>n;
    vector<int> v(n);
    for(i = 0; i < n; i++){
        cin>>v[i]; 
    }
    ct = 1;
    for (i = 0; i < n-1; i++){
        if(v[i]>=v[i+1]){
            ct = 1;
        }
        else {
            ct++;
            mx = max(mx, ct);
            //if(i==n-1) break;
        }
    }
    cout << mx;
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