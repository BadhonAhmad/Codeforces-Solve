#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
const int N = 1e4+10;
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
bool isPrime[N];

void solve(){
    int n;
    char ch;
    cin >> n >> ch;
    string s; 
    cin >>  s;
    if(count(s.begin(),s.end(),ch) == n){
        cout << "0\n";
        return;
    }
    for(int i = (n/2) + 1; i <= n; i++){
        if(s[i-1] == ch){
            cout << 1 << endl << i << endl;
            return;
        }
    }
    cout << 2 << endl << n << ' ' << n-1 << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;
    

    while(t--)
        solve();

    return 0;
}

