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
    int i,j,a,b,m,c,sm=0,ct=0,n,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    cin>>n >> m;
    vll v(m+1);
    for(i = 1; i <= m; i++){
        cin>>v[i];
    }
    sort(all(v));
    if(v[1] == 1 || v[m] == n) {
        no;
        return;
    }
    if(m == 0){
        yes;
        return;
    }
    for (i = 1; i < m; i++){
        if(v[i]+1 == v[i+1]){
            ct++;
        }
        else
            ct = 0;
        if(ct>=2){
            no;
            return;
        }
    }
    yes;
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