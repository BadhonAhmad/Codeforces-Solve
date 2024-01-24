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
int v[33];
/*****SALAH is the first thing you will be questioned about*****/
/*****    so donot make it the last thing on your mind   *****/

void solve()
{
    int i,j,a,b,c,sm=0,n,f=0,mn=LONG_LONG_MAX,mx=0;
    cin>>n;
    //cout << e;
    sm += v[n];
    
    a = n - (n/2)-1;
    // for (i = 1; i <= n; i++){
    //     cout << v[i] << " ";
    // }
    // cout << e;
    for (i = 1; i <= a;i++){
        sm += v[i];
    }
   
    for (; i < n; i++){
        mx += v[i];
    }
    cout <<abs( mx - sm) << e;
    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    int j = 2;
    memset(v, 1, sizeof(v));
    for (int i = 1; i <= 30; i++){
        v[i] = j;
        j = j * 2;
    }
    cin >> T;
    while (T--)
        solve();
    return 0;
}