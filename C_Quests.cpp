// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define all(a) a.begin(), a.end()
// #define allr(a) a.rbegin() , a.rend()
// #define yes cout<<"YES\n"
// #define SetBit(x, k) (x |= (1LL << k))
// #define ClearBit(x, k) (x &= ~(1LL << k))
// #define CheckBit(x, k) ((x >> k) & 1)
// #define no cout<<"NO\n"
// int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

// void solve(){
//     int n, i, k, mn = INT_MAX,sm1 = 0, mx2 = INT_MIN;
//     int ans = 0;
//     cin >> n >> k;
//     vector <int> v(n),vv(n);
//     for(i = 0; i < n; i++){
//         cin >> v[i];
//         sm1 += v[i];
//         mn = min(mn, v[i]);
//     }

//     for(i = 0; i < n; i++){
//         cin >> vv[i];
//         mx2 = max(vv[i], mx2);
//     }
//     if(mn >= mx2){
//         ans += 
//     }
    
//     for(i = 0; i < n; i++){
//         ans += v[i];
//         k--;
//         if(vv[i] == mx){

//         }
//         if(k == 0) break;
//         if(vv[i+1] >= vv[i] && i + 1 < n && vv[i] <= v[i+1]) continue;
//         if(vv[i+1] < vv[i] && i + 1 < n ){
//             if(v[i+1] > vv[i])
//             { 
//                 ans += (k-1) * vv[i];
//                 ans += v[i+1];
                
//             }
//             else{
//                 ans += k * vv[i];
//             }
//             break;
//         }
//         else{
//             ans += vv[i] * k;
//         }
        
//     }
//     cout << ans << endl;

// }

// int32_t main(){
//     ios::sync_with_stdio(false);cin.tie(0);

//     int t=1;
//     cin >> t;

//     while(t--)
//         solve();

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, i, k;
    cin >> n >> k;
    vector <int> a(n),b(n);
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    for(i = 0; i < n; i++){
        cin >> b[i];
    }
    int ans = 0,mx = 0,sum = 0;
    for(i = 0; i < min(n,k); i++){
        sum += a[i];
        mx = max(mx,b[i]);
        ans = max(ans,sum + mx * (k-i-1ll));
    }
    cout << ans << endl;

}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}