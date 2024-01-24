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
#define deb(x) cout << #x << " = " << x << " , " << '\n';
#define endl "\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, m, k, i, j, ct = 0, f = 0, ans = 0, sm = 0, mn = LONG_LONG_MAX, mx = LONG_LONG_MIN, a, b, c, d;
    cin >> n;
    vector <int> v(n);
    multiset<pair<int,int>>st;
    for(i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] > 0)
            st.insert({v[i],i});
    }
    vector<pair<int,int>> anss;
    while (st.size() > 1)
    {
        pair<int,int> pr = *(--st.end());    
        st.erase(pr);
        ///cout << pr.first << ' ' << pr.second << endl;
        pair<int,int> pr1 = *(--st.end());
        st.erase(pr1);
        pr.first--;
       
        anss.push_back({pr.second+1,pr1.second+1});
        
        pr1.first--;
        if(pr.first > 0){
            st.insert({pr.first,pr.second});
        }
        if(pr1.first > 0){
            st.insert({pr1.first,pr1.second});
        }
    }
    cout << anss.size() << '\n';
    for(auto i : anss)
    {
        cout << i.first << ' ' << i.second << endl;
    }    
    
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) solve();
    return 0;
}
