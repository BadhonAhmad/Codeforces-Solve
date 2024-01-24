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
#define prnt(v) for(auto it : v) cout<<it<<" ";cout<<"\n";
#define db(x) cout << #x << " = " << x << " , " << '\n';
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i,_1 = 0,_0 = 0;
    for(i = 0; i < n; i++){
        (s[i] == '0')?_0++:_1++;
    }
    if(_1 != _0){
        cout << -1 << '\n';
        return ;
    }
    int l = 0,r = n - 1;
    vector<int> v;
    while (l < r)
    {
        if(s[l] == s[r]){
            if(s[l] == '1'){
                s.insert(l, "01");
                v.push_back(l);
                r += 2;
            }
            else {
                s.insert(r+1, "01");
                v.push_back(r+1);
                r += 2;
            }
        }
        if(s[l] != s[r]){
            l++;
            r--;
        }
    }
    cout << v.size() << "\n";
    prnt(v);
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) 
        solve();

    return 0;
}
