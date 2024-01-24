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
    int i,j,k,a,b,c,sm=0,n,m,f=0,mn=LONG_LONG_MAX,mx=0;
    string s,t;
    cin>>n;
    a = 0;
    vector<int> v(n+1);
    for(i = 1; i <= n; i++){
        cin>>v[i];
        if(v[i] == 0)
            f++;
        if(v[i] == 5){
            sm += v[i];
            a++;
            if(sm%9 == 0){
                mx = a;
            }
        }
    }
    if(f && mx){
        while (mx)
        {
            cout << 5;
            mx--;
        }
        for (i = 0; i < f; i++)
            cout << 0;
    }
    else if(!f){
        cout << -1;
    }
    else
        cout << 0;

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