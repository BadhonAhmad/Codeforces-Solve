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
int dgtsm(string s){
    int sm = 0,n = s.size();
    for(int i = 0; i < n; i++){
        sm += s[i] - '0';
    }
    return sm;
}
void solve(){
    int n, i,j , k;
    cin >> n;
    vector <string> v(n);
    map<pair<int,int>,int> mp;//digits sm,length },repetition
    for(i = 0; i < n; i++){
        cin >> v[i];
        int a = dgtsm(v[i]);
        int x = v[i].size();
        mp[{a,x}]++;
    }
    // for(auto it : mp){
    //     pair<int,int> pr = it.first;
    //     db3(pr.first,pr.second,it.second);
    // }
    int ans = 0;
    for(i = 0; i < n; i++){
        int a = v[i].size();
        if(a % 2){
            for(j = 1; j <= 5; j += 2){
                int x = a + j;
                
            }   
        }
        else{
    
        }
    }
    cout << ans << '\n';
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    //cin>>T;

    while(T--) solve();

    return 0;
}
