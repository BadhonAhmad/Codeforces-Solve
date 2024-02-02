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
    string s1,s2,rl1,rl2;
    cin >> s1 >> s2 ;
    // rl1 = s1;
    // rl2 = s2;
    int ct = count(s1.begin(),s1.end(),'.');
    // int ctt = count(s2.begin(),s2.end(),'.');

    // for(int i = ct; i < 2; i++){
    //     // if(ct == 0) i = 1;
    //     s1 += ".0";
    // }
    
    // for(int i = ctt; i < 2; i++){
    //     // if(ctt == 0) i = 1;
    //     s2 += ".0";
    // }
    //db2(s1,s2);
    int j = 0,k = 0,ct1 = 0,ct2 = 0;
    for(int i = 0; i < ct; i++){
        string tm1 = "",tm2 = "";
        while (s1[j] != '.' && j < s1.size())
        {
            tm1 += s1[j];
            j++;
        }
        while (s2[k] != '.' && k < s2.size())
        {
            tm2 += s2[k];
            k++;
        }
        int a = stoi(tm1);
        int b = stoi(tm2);
        if(a > b){
            cout << s1;
            return ;
        }
        if(b > a ){
            cout << s2;
            return;
        }
        j++,k++;
    }
    if(s1.size() >= s2.size()){
        cout << s1;
    }//11.11111.
    //12.
    else  cout << s2;

}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    //cin>>T;

    while(T--) 
        solve();

    return 0;
}
