#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n; 
    cin >> n;
    string s;
    cin >> s;
    int ct = 1;
    map<char,int>mp;
    set<char> st;

    st.insert(s[0]);

    for(int i = 1; i < n; i++){
        st.insert(s[i]);
        if(s[i] == s[i-1]){
            ct++;
        }
        else{
            if(mp[s[i-1]] < ct)
                mp[s[i-1]] = ct;
            ct = 1;
        }
    }
    if(ct > 1)
    {
        if(mp[s[n-1]] < ct)
            mp[s[n-1]] = ct;
    }

    int ans = 0;

    for(auto it : mp){
        if(it.second > 1)
            ans += it.second - 1;
    }
    cout << ans + st.size()<< endl;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    //cin >> t;

    while(t--)
        solve();

    return 0;
}

