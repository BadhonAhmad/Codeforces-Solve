#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define mod 998244353
#define N 1000006

void solve(){
    string s; 
    cin >> s;
    set <char> st;//st{0};
    int cnt = 0, n = s.size();
    for(auto ch : s){
        if(st.count(ch)){
            cnt++;//pair found
            st.clear();
        }
        else{
            st.insert(ch);
        }
    }
    cout << n - cnt * 2 << endl;
    //The extra characters
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}

