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
    
    cin>>n>>k;
    vector<int> v(n),vk;
    for(i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(all(v));
    ct = 1;
   // cout << "Hi" << e;
    
    for(i = 0; i < n-1; i++){
        int x = abs(v[i] - v[i + 1]);
        if(x<=k){
            ct++;
        }
        else{
            vk.push_back(ct);
            ct = 1;
        }
    }
    vk.push_back(ct); // Add the last subsequence to the vector
    sort(all(vk));
    ct = vk.back();
    // for(auto it:vk){
    //     cout << it << " ";
    // }
    // cout << e;
    cout << n - ct << e;

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
