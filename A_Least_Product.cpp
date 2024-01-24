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
    int i,n,ct=0,id = 1,f = 0; 
    cin >> n;
    vector<int> v(n);
    for(i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 0) f=1;
        if(v[i] < 0){
            ct++;
            if(ct == 1)
                id = i+1;
        }
    }
    if(f == 1 || ct % 2 == 1){ 
            cout << 0 << endl;
            return;
    }
    if(ct % 2 == 0 && ct > 0){
        cout << 1 << endl;
        cout << id << ' ' << 0 << endl;
    }
    else {
        cout << 1 << endl << "1 0" << endl;
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

