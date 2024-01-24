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
        mn = min(mn, v[i]);
        mx = max(v[i], mx);
    }
    sort(all(v));
    int ct = 0,tc=0;
    for(i = 1; i <= n ;i++){
       if(v[i] == mn)
           ct++;
        if(v[i] == mx)
           tc++;
    }

    if(mx ==  mn){
        cout <<(n-1)*n << e;
    }
    else{
        cout <<2 * max(tc, ct) * min(tc, ct) << e;
    }
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