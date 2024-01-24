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
    int n, i, j;
    cin >> n;
    vector <string> v(n);
    map<string,int> cnt;
    for(i = 0; i < n; i++){
        cin >> v[i];
        cnt[v[i]]++;
    }
    int ans = 0;
    for(i = 0; i < n; i++){
        for(int j = 0; j< 2; j++){
            for(char ch = 'a'; ch <= 'k'; ch++){
                if(ch == v[i][j]) continue;
                string s = v[i];
                s[j] = ch;
                ans += cnt[s];
            }
        }
    }
    cout << ans / 2 << endl;
}


int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

