#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin() , a.rend()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int ceil_div(int a, int b) { return a % b == 0 ? a / b : a / b + 1; }
const int N = 200220;
int cnt [N];
set<int> st[N];
void solve(){
    int n, i, k;
    for(int i = 1; i<= N; i++)
        st[0].insert(i);
    cin >> n >> k;
    int mx = 0;
    for(i = 0; i < k; i++){
        int x; 
        cin >> x;
        st[cnt[x]].erase(x);
        cnt[x]++;
        mx = max(mx,cnt[x]);
        st[cnt[x]].insert(x);
        cout << *st[mx].begin() << '\n';
    }
    
}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    //cin >> t;

    while(t--)
        solve();

    return 0;
}

