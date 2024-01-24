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
bool cmp(pair<int,int> a, pair<int,int> b) {return a > b;}///boro theke choto base on 1st element
bool cmp2(pair<int,int>a, pair<int,int> b){ return a.second < b.second; }// choto theke boro base on 2nd element
void solve(){
    int n,i ,ct = 0,z = 0;
    cin >> n;
    vector <int> v(n);

    vector <pair <int, int> > vp(n);
    for(i = 0; i < n; i++){
        int a; 
        cin >> a;
        if(a == 0) z++;
        if(a < 0) ct++;
        vp[i].first = a;
        vp[i].second = i;
    }
    if(z == n || (z + ct == n && z > 0 && ct == 1)){
        cout << 0;
        return;
    }
    if(n == 1){
        cout << vp[0].first;
        return;
    }
    sort(all(vp));
    int f = 0;
    if(ct % 2){
        f = 1;
    }
    for(i = 1; i <= n; i++){
        if(f && i == ct){
            vp[i-1].first = 0;
        }
    }
    sort(vp.begin(),vp.end(),cmp2);
    for(int i = 0; i < n; i++){
        if(vp[i].first != 0)
            cout << vp[i].first << ' ';
    }

}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
    //cin>>T;

    while(T--) solve();
    return 0;
}
