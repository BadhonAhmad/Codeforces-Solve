/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long int
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i,j,x1,y1,x2,y2,k,a,b,c,sm=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin >> x1 >> y1 >> x2 >> y2;
    int bahu;
    if(x1 != x2 && y1 != y2 && abs(x1-x2) != abs(y1-y2)){
        cout << -1;
        return;
    }
    if(x1 == x2){
        cout << x1+abs(y1 - y2) << ' ' << y1 << ' ' << x2+abs(y2 - y1) << ' ' << y2;
        return;
    }
    if(y1 == y2){
        cout << x1 << ' ' << y1 + abs(x1 - x2) << ' ' << x2 << ' ' << y2 + abs(x1 - x2);
        return;
    }
    else{
        cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1;
    }
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