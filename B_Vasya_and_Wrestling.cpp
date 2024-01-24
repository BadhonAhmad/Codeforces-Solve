/**Everyone who is taken by death asks for more time, while 
everyone who has time makes excuses for procrastination.
--Ali Ibn Abi Talib(Ra)**/


#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "first\n"
#define all(a) a.begin(), a.end()
#define sj size()
#define no cout << "second\n"
#define prnt(v) for(auto it : v) cout<<it<<" ";cout<<"\n";
#define deb(x) cout << #x << " = " << x << " , " << '\n';
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n , i ,sm1 = 0,sm2 = 0, j;
    cin >> n;
    vector <int> fv,sv;
    for(i = 0; i < n; i++){
        cin >> j;
        if(j < 0)
            sv.push_back(-j),sm2 += (-j);
        else fv.push_back(j),sm1 += (j);
    }
    
    
    if(sm1 > sm2){
        yes;
        return;
    }
    else if(sm2 > sm1){
        no;
        return;
    }
    for(i = 0; i < min(fv.size(),sv.size()); i++){
        if(fv[i] > sv[i]){
            yes;
            return;
        }
        else if(sv[i] > fv[i]){
            no;
            return;
        }
    }
    if(fv.size() > sv.size()){
        yes;
        return;
    }
    else if(sv.size() > fv.size()){
        no;
        return;
    }
    if(j > 0){
        yes;
    }
    else no;
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T=1;
//    cin>>T;

    while(T--) solve();
    return 0;
}
