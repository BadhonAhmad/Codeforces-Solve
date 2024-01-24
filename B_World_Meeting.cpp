// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define endl "\n"
// #define all(a) a.begin(), a.end()
// #define allr(a) a.rbegin() , a.rend()
// #define pb(a) push_back(a)
// #define yes cout<<"YES\n"
// #define no cout<<"NO\n"
// int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

// void solve(){
//     int i,n; cin >> n;
//     vector<pair<int,int>> vp;
//     vector<int> v(n),cum(n+1);
//     for(i = 0; i < n; i++){
//         int a, b; 
//         cin >> a >> b;
//         v[i] = b;
//         vp.push_back({b,a});
//     }
//     sort(all(vp));
//     int j = 1;
//     // cum[-1] = 0;
//     for(auto it : vp){
//         int x = it.second;
//         cum[j] += cum[j-1] + x;
//         j++;
//     }

//     sort(all(v));

//     // for(auto it: cum ) cout << it << ' ';
//     // cout << endl;
//     int mx = LONG_LONG_MIN;
//     for(i = 0; i < n; i++){
//         int a = vp[i].first;
//         int id = lower_bound(v.begin(),v.end(),a+9)-v.begin();
        
//         mx = max(mx, cum[id] - cum[i]);
//     }   
//     cout << mx ;
// }

// int32_t main(){
//     ios::sync_with_stdio(false);cin.tie(0);

//     int t=1;
//     //cin >> t;

//     while(t--)
//         solve();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n; cin >> n;
    vector<int> cnt(24);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        cnt[b] += a;
    }
    int mx = 0;
    for(int i = 0; i < 24; i++){
        int ans = 0;
        for(int j = 0; j < 9; j++){
            ans += cnt[(i+j)%24];
        }
        mx = max(mx, ans);
    }
    cout << mx ;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    //cin >> t;

    while(t--)
        solve();

    return 0;
}

