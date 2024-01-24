#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, i;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    int mn = INT_MAX;
    for(i = 0; i < n; i++){
        if(i == 1){
            if(s[i-1] == 'a'){
                if(s[i] == s[i-1] ){
                    mn=min(mn,2ll);
                }
                else if(s[i+1] == 'a' && i+1 < n){
                    mn = min(mn,3ll);
                }
            }
        }
        else{
            if(s[i] == 'a'){
                if(s[i-1] == 'a'){
                    mn = min(mn, 2ll);
                }
                else if(s[i-2] == 'a'){
                    mn = min(mn, 3ll);
                }
                else if(i - 3 >= 0 && s[i-3] == 'a' && s[i-1] != s[i-2]){
                    mn = min(mn, 4ll);
                }
                else if(i >= 6 && s[i-6] == 'a' && s[i-3] == 'a' && s[i-5] == s[i-4] && s[i-1] == s[i-2] && s[i-1] != s[i-4]){
                    mn = min(mn, 7ll);
                }
            }
        }
        
    }    
    if(mn == INT_MAX){
        cout << -1 <<endl;
        return;
    }
    cout << mn  << endl;   
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}