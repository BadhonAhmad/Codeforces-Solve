/*****from dust i have come, dust i will be*****/

#include <bits/stdc++.h>
using namespace std;

#define vll vector<int>
#define all(a) a.begin(), a.end()
#define pb(a) push_back(a)
#define e "\n"
#define int long long int
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i,j,a,b,c,sm=0,n,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    cin>>n;
    vll v(n+1);
    for(i = 1; i <= n; i++){
        cin>>v[i];
    }
    sort(all(v));
    if(v[n] == n){
        cout << n + 1;
        return;
    }
    j = 1;
    for(i = 1; i <= n; i++){
        if(v[i] == j++) continue;
        else{
            cout << --j;
            return;
        }
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