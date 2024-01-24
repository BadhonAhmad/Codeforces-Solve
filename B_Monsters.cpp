#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int i,j,k,a,b,c,sm=0,ct=0,n,m,f=0,mn=LONG_LONG_MAX,mx=LONG_LONG_MIN;
    string s,t;
    cin>>n>>k;
    vector<int> v(n),an;
    vector<pair<int, int>> vp;
    for(i = 0; i < n; i++){
        cin>>v[i];
        v[i] %= k;
        if(v[i] == 0){
            an.push_back(i + 1);
        }
        else
        vp.push_back({-v[i], i});
    }
    for(auto it:an){
        cout << it << ' ';
    }
    sort(vp.begin(), vp.end());

    for(auto it:vp){
        cout << it.second + 1 << " ";
    }
    cout << endl;
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