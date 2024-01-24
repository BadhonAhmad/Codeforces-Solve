/**Everyone who is taken by death asks for more time, while 
everyone who has time makes excuses for procrastination.--Ali Ibn Abi Talib(Ra)**/
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
    string s;
    int i , j,a ,b,c;
    char ans ;
    for(i = 0; i < 3; i++){
        cin >> s;
        a = 0,b= 0,c =0;
        for(int j = 0; j < 3; j++){
            if(s[j] == 'A'){
                a = 1;
            }
            else if(s[j] == 'B') b = 1;
            else if(s[j] == 'C') c = 1;
        }
        if(!a) ans = 'A';
        else if(!b) ans ='B';
        else if (!c) ans = 'C';
    }
    cout << ans << endl;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T=1;cin>>T;
    while(T--) solve();
    return 0;
}
