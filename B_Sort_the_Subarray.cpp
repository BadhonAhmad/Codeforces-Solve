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
    int i,j,k,a=0,b=0,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n;
    vector<int> v(n),vv(n);
    for(i = 0; i < n; i++){
        cin>>v[i]; 
    }
    for(i = 0; i < n; i++){
        cin>>vv[i]; 
    }
    j = n - 1;
    for (i = 0; i < n; ){
        if(v[i] == vv[i] && !a){
            i++;
        }
        else {
            a = 1;
        }
        if(v[j] == vv[j] && !b){
            j--;
        }
        else
            b = 1;
        if(a && b){
            break;
        }
    }
    while (1)
    {
        if(i == 0){
            break;
        }
        if(vv[i-1] <= vv[i]){
            i--;
        }
        else {
            break;
        }
    }
    while (1)
    {
        if(j == n-1){
            break;
        }
        if(vv[j+1]>=vv[j]){
            j++;
            f = 1;
        }
        else{
            break;
        }
        
    }
    // if(f)
    // cout << i + 1 << " " << j << e;
    // else
    cout << i + 1 << ' ' << j + 1 << e;

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