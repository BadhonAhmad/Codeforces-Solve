#include <bits/stdc++.h>
using namespace std;

#define e               "\n"


void solve()
{
    int n,j;
    string s;
    cin >> s;
    cin >> n;
    int ct = 0,f=0;
    vector<string> sk(n);
    for (int i = 0; i < n; i++){
        string sj;
        cin >> sk[i];
    }
    string ans = s;
    sort(sk.begin(), sk.end());
    for(auto it:sk){
        if(it.size()>=s.size() && it.substr(0,s.size()) == s){
            ans = it;
            break;
        }
    }
    cout << ans;
    return;
}
     
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T = 1;
    //cin >> T;
    while (T--)
        solve();
    return 0;
}