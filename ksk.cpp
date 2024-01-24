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


void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n;
    map<double, int> mp;
    for(i = 0; i < n; i++){
        cin>>a;
        mp[a]++;
    }
    for (i = 0; i <= 10; i++){
        if(i == 0){
            a = mp[i];
            //cout << a << endl;
            if(a == 2)
                sm++;
            else
            sm += (a ) * (a - 1) / 2;
        }
        else{
            mx = max(mp[i], mp[-i]);
            mn = min(mp[i], mp[-i]);
            sm += mx * mn;
        }
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