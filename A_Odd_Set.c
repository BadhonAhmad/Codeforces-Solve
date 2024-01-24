#include <bits/stdc++.h>
using namespace std;


void solve()
{
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>v[i]; 
    }
    sort(all(v));
    if(n == 2){
        cout<<v[0]<<' '<<v[1]<<endl;return;
    }
    for(i=1; i<n; i++){
        if(mn>v[i]-v[i-1]){
            sm=i;
            mn=v[i]-v[i-1];
        }
    }
    for(i=sm; i<n; i++){
        cout<<v[i]<<' ';
    }
    for(i=0; i<sm; i++) cout<<v[i]<<' ';
    cout<<endl;
    return;
}
     
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1; cin >> t;
    while (t--) solve();
}