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

void add_divs(int x, map<int,int> & mp){
    int i = 2;
    while (i*i <= x)
    {
        while (x % i == 0)
        {
            mp[i]++;
            x/=i;
        }
        i++;
    }
    if(x > 1) mp[x]++;
    
}
void solve(){
    int n, i;
    cin >> n;
    vector <int> v(n);
    map <int, int> mp;
    for(i = 0; i < n; i++){
        cin >> v[i];
        add_divs(v[i],mp);
    }
    for(auto i : mp){
        if(i.second % n != 0){
            no;
            return;
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
