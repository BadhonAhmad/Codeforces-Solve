#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define pb(a) push_back(a)
#define yes cout<<"YES\n"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }

void solve(){
    int n, k;
    cin >> n >> k;
    string s; 
    cin >> s;
    int ct = 0;
    vector<int> cumb(n+1),cuma(n+1);
    for(int i = 0; i < n; i++){
        if(s[i] == 'B'){
            ct++;
            cumb[i+1] = cumb[i] + 1;
        }
        else{
            cumb[i+1] = cumb[i];
        }
        if(s[i] == 'A'){
            cuma[i+1] = cuma[i] + 1;
        }
        else{
            cuma[i+1] = cuma[i] ;
        }
    }
    if(ct == k){
        cout << 0 << endl;
        return;
    }
    else if(ct > k){
        cout << 1 << endl;
        for(int i = 1; i <= n; i++){
            int x = ct - k;
            if(x == cumb[i] && s[i-1] == 'B')
            {
                cout << i << ' ' << 'A' << endl;
                return;
            }
        }
    }
    else{
        cout << 1 << endl;
        for(int i = 1; i <= n; i++){
            int x = k - ct;
            if(x == cuma[i] && s[i-1] == 'A')
            {
                cout << i << ' ' << 'B' << endl;
                return;
            }
        }
    }
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

