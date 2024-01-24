#include <bits/stdc++.h>
using namespace std;

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
    vector <int> v(n+1),mis,el;
    int ct= 0;
    vector<int>vis(n+1,0);
    int mxi = INT_MIN;
    for(i = 1; i <= n; i++){
        cin >> v[i];
        if(v[i] <= n){
            if(vis[v[i]] == 1){
                ct++;
                el.push_back(v[i]);
            }
            vis[v[i]] = 1; 
        }
        else mxi = max(mxi,v[i]),ct++,el.push_back(v[i]);
    }

    sort(all(el));
   
    int mx = INT_MIN;
    for(i = 1; i <= n; i++){
        if(vis[i] == 0){
            mx=max(mx,i);
            mis.push_back(i);
        }
    }
    sort(all(mis));
    int a = el.size();
    int b = mis.size();
    if(a != b){
        cout << -1 << endl;
        return;
    }
    for(int j = b-1; j>=0; j--){
        int id = mis[j];
        int ele = el[j];
        int mk = (ele-1)/2;
        if(id > mk){
            cout << -1 << endl;
            return;
        }
    }
    cout << a << endl;
    



}

int32_t main(){
    ios::sync_with_stdio(false);cin.tie(0);

    int t=1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}

