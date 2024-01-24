/**Everyone who is taken by death asks for more time, while 
everyone who has time makes excuses for procrastination.
--Ali Ibn Abi Talib(Ra)**/


#include <bits/stdc++.h>
using namespace std;


int ans[1010],n;
int ask(int l,int r){
    cout << "? " << l << " " << r << endl;
    int val;
    cin >>  val;
    return val; 
}
void solve(){
    cout << "!";
    for(int i = 1; i <= n; i++) cout<< " " << ans[i] ;
    cout << '\n';
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    ans[n] = ask(1, n);
    ans[1] = ans[n]-ask(2, n); 
    for(int i = 2; i <= n-1; i++) ans[i] = ask(i-1,i)-ans[i-1];
    for(int i = 1; i < n; i++) ans[n] -= ans[i];

    solve();

    return 0;
}
