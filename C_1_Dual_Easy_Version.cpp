#include <bits/stdc++.h>
using namespace std;

#define vll     vector<int>
#define all(a)  a.begin(), a.end()
#define pb(a)   push_back(a)
#define e       "\n"
#define int     long long 
#define yes     cout<<"YES\n"
#define no      cout<<"NO\n"


void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n;
    vector<int> v(n);
    for(i = 0; i < n; i++){
        cin>>v[i];
        b = mx;
        if(mx<v[i]){
            mx = v[i];
        }
        if(b != mx){
            ct = i + 1;
        }
    }
    a = 50 - n ;

    cout << 49 << e;
     sm = 0;
    for (i = 0; i < a; i++){
        cout << ct << " " << ct << e;
        //sm++;
    }
    for (i = 0; i < n; i++){
        if(i+1 != ct){ 
            cout << i + 1 << " " << ct << e;
            sm++;
        }
    }
    //cout << sm << " hel" << e;
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