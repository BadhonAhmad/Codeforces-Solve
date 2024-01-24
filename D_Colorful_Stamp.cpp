#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n,f = 0, i;
    cin >> n;

    string s; cin >> s;
    if(n  == 1 && s[0] != 'W'){
        no;
        return;
    }

    for(i = 0; i < n; i++){
        if(s[i] != 'W'){
            int a = 0, b= 0;
            while (s[i] != 'W' )
            {
                if(s[i] == 'B') a++;
                if(s[i] == 'R') b++;
                i++;
                if(i == n){
                    break;
                }
            }
            if(a == 0 || b == 0) f = 1;
        }
        
    }
    if(f) no;
    else yes;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

