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
#define prnt(v) for(auto it : v) cout<<it<<" ";cout<<endl;
#define endl "\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
#define N 200005

void solve(){
    int n, m, k, i, j, ct = 0, f = 0, ans = 0, sm = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, a, b, c, d;
    cin >> n >> m >> d;
    vector <int> v(n+1);
    for(i = 1; i <= n; i++){
        cin >> v[i];    
    }
    yes;
    set<pair<int,int>>st;//height ,indexes

    for(i=1; i <= m; i++)
    {
        st.insert({0,i});
    } 
    // as the heights of individual towers are less than x so there is always a solution
    // to minimize the differene in the set they are maintining an order of difference from the previous tower
    for(int i = 1; i <= n; i++){
        pair<int,int> p = *st.begin();  
        st.erase(p);
        cout << p.second << ' ';
        st.insert({v[i] + p.first, p.second});
    }
    cout << endl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) solve();
    return 0;
}
