/**Everyone who is taken by death asks for more time, while 
everyone who has time makes excuses for procrastination.
--Ali Ibn Abi Talib(Ra)**/


#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define no cout << "NO\n"
#define endl "\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
#define N 200005

void solve(){
    //int n, m, k, i, j, ct = 0, f = 0, ans,sm = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, a, b, c, d, temp;
    vector<int> v(3);
    multiset <int> st;//st{0};
    int sm = 0;
    for(int i = 0; i<3; i++){
        int x;
        cin >> x;
        v[i] = x;
        if(v[i] > 0){
            sm++;
            v[i]--;
            //if(v[i] < 0) v[i] = 0;
        }
    }  
    sort(allr(v));
    
    for(int i = 0; i < 2; i++){
        for(int j = i+1; j < 3; j++){
            if(v[i] > 0 && v[j] > 0){
                sm++;
                v[i]--;
                v[j]--;
            }
        }
        
    }
    cout << sm << endl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--) solve();
    return 0;
}
