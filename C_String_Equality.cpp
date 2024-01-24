/**Everyone who is taken by death asks for more time, while 
everyone who has time makes excuses for procrastination.
--Ali Ibn Abi Talib(Ra)**/


#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES\n"
#define all(a) a.begin(), a.end()
#define sj size()
#define no cout << "NO\n"
#define prnt(v) for(auto it : v) cout<<it<<" ";cout<<"\n";
#define deb(x) cout << #x << " = " << x << " , " << '\n';
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n , k , i , j, ct = 0;
    cin >> n >> k;
    string s,t;
    cin >> s;
    cin >> t;
    
    map <int, int> mp1,mp2;
    for(i = 0; i < n; i++){
        mp1[s[i]-'a']++;
        mp2[t[i]-'a']++;
    }
    for(i = 0; i < 26; i++){
        int x = mp1[i]-mp2[i];
        if(x < 0 || x % k){
            no;
            return;
        }
        mp1[i+1] += x;
    }yes;
    


}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    cin>>T;

    while(T--) solve();
    return 0;
}
