#include <bits/stdc++.h>
using namespace std;

#define int long long
void solve(){
    int n, i, k, sm = 0,tsm = 0;
    cin >> n >> k;
    vector <int> v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
        tsm += v[i];
    }
    sort(v.begin(),v.end());
    i = n-1;
    while (sm < k && i >= 0)
    {
        if(v[i] + sm > k){
            i--;continue;
        }
        sm += v[i];
        i--;
    }
    //cout << sm << endl;
    int lo = 0,mn=LONG_LONG_MAX,hi = 1e12;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        int an = sm * mid;
        if(tsm > an){
            lo = mid + 1;
        }
        else{
            
            hi = mid - 1;
        }
    }

    cout << lo << endl;
}

int32_t main(){
    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

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
//     int k,n, i;
//     cin >> n >> k;
//     vector <int> v(n);
//     multiset <int> st;//st{0};
//     for(i = 0; i < n; i++){
//         cin >> v[i];
//         st.insert(v[i]);
//     }
//     int space = k,ans = 1;
//     while (!st.empty())
//     {
//         auto it = st.upper_bound(space);
//         if(it != st.begin()){
//             it--;
//             int val = *it;
//             st.erase(it);
//             space -= val;
//         }
//         else{
//             ans ++;
//             space = k;
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

