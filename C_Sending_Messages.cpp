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
    int n,f,a,b,i,j;
    cin >> n >> f >> a >> b;
    vector<int> v(n+1,0);
    for(i =   1; i <= n; i++){
        cin >> v[i];
    }
    for(i = 1; i <= n; i++){
        int ek = (v[i] - v[i-1]) * a;
        int ark = b;
        if(ek < ark){
            f -=  (v[i] - v[i-1]) * a; 

            if(f <= 0){
                no;
            
                return;
            }
        }
        else{
            f -= b;
            if(f <= 0){
                no;
                return;
            }
        }
    }

    yes;
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
