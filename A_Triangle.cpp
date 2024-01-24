/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long int
#define SetBit(x,k)     (x|=(1LL<<k))
#define CheckBit(x,k)   (x&(1LL<<k))//(1&(x>>k))
#define ClearBit(x,k)   (x &= ~(1LL<<k))
const int N = 1e5 + 10;


void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    n = 4;
    vector<int> v(n);
    set<int> st;
    for(i = 0; i < n; i++){
        cin>>v[i];
        st.insert(v[i]);
    }
    sort(all(v));
    sm = v[2] + v[3];
    if(sm>=v[0]){
        if(st.size()<4)
            cout << "SEGMENT";
        
        else
            cout << "TRIANGLE";
    }
    else cout << "IMPOSSIBLE";

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